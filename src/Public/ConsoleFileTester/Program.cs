﻿using CozyAnywhere.Plugin.WinFile;
using CozyAnywhere.Plugin.WinFile.Ext;
using CozyAnywhere.Plugin.WinFile.Model;
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace ConsoleFileTester
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            var WinFileList = new List<WinFile>();
            var pathName    = @"E:\";
            FileUtil.FileEnum(pathName + '*', (x, b) =>
            {
                if (x != IntPtr.Zero)
                {
                    var path            = Marshal.PtrToStringAuto(x);
                    ulong size          = FileUtil.GetFileLength(pathName + path);
                    ulong createTime    = 0;
                    ulong accessTime    = 0;
                    ulong writeTime     = 0;
                    FileUtil.GetFileTimes(pathName + path, ref createTime, ref accessTime, ref writeTime);
                    var time = new WinFileTime()
                    {
                        CreationTime    = createTime,
                        LastAccessTime  = accessTime,
                        LastWriteTime   = writeTime,
                    };

                    var file = new WinFile()
                    {
                        Name        = path,
                        IsFolder    = b,
                        Size        = size,
                        Times       = time,
                    };
                    WinFileList.Add(file);
                }
                return false;
            });

            Console.WriteLine("---------------------------------Folder:---------------------------------");
            foreach (var obj in WinFileList)
            {
                if (obj.IsFolder)
                {
                    Console.WriteLine("Name: {0}\tCreationTime: {1}\tLastAccessTime: {2}\tLastWriteTime: {3}",
                    obj.Name, obj.Times.CreationTime.ToDateTime(), obj.Times.LastAccessTime.ToDateTime(), obj.Times.LastWriteTime.ToDateTime());
                }
            }

            Console.WriteLine("---------------------------------File:---------------------------------");
            foreach (var obj in WinFileList)
            {
                if (!obj.IsFolder)
                {
                    Console.WriteLine("Name: {0}\tSize: {1}\tCreationTime: {2}\tLastAccessTime: {3}\tLastWriteTime: {4}",
                    obj.Name, obj.Size, obj.Times.CreationTime.ToDateTime(), obj.Times.LastAccessTime.ToDateTime(), obj.Times.LastWriteTime.ToDateTime());
                }
            }
            Console.WriteLine("---------------------------------End:---------------------------------");
            Console.ReadKey();
        }
    }
}