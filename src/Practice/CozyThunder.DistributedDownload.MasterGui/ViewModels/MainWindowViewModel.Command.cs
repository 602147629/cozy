﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CozyThunder.DistributedDownload.MasterGui.Commands;
using System.Windows.Input;

namespace CozyThunder.DistributedDownload.MasterGui.ViewModels
{
    public partial class MainWindowViewModel
    {
        private ICommand _CreateTaskCommand;
        public ICommand CreateTaskCommand
        {
            get
            {
                return _CreateTaskCommand = _CreateTaskCommand ?? new DelegateCommand(x => 
                {

                });
            }
        }

        private ICommand _PauseTaskCommand;
        public ICommand PauseTaskCommand
        {
            get
            {
                return _PauseTaskCommand = _PauseTaskCommand ?? new DelegateCommand(x =>
                {

                });
            }
        }

        private ICommand _ResumeTaskCommand;
        public ICommand ResumeTaskCommand
        {
            get
            {
                return _ResumeTaskCommand = _ResumeTaskCommand ?? new DelegateCommand(x =>
                {

                });
            }
        }

        private ICommand _CalcneTaskCommand;
        public ICommand CalcneTaskCommand
        {
            get
            {
                return _CalcneTaskCommand = _CalcneTaskCommand ?? new DelegateCommand(x =>
                {

                });
            }
        }

        private ICommand _EnableDistributedCommand;
        public ICommand EnableDistributedCommand
        {
            get
            {
                return _EnableDistributedCommand = _EnableDistributedCommand ?? new DelegateCommand(x =>
                {

                });
            }
        }

        private ICommand _DisableDistributedCommand;
        public ICommand DisableDistributedCommand
        {
            get
            {
                return _DisableDistributedCommand = _DisableDistributedCommand ?? new DelegateCommand(x =>
                {

                });
            }
        }

        private ICommand _GlobalSettingCommand;
        public ICommand GlobalSettingCommand
        {
            get
            {
                return _GlobalSettingCommand = _GlobalSettingCommand ?? new DelegateCommand(x =>
                {

                });
            }
        }

        private ICommand _AddPeerCommand;
        public ICommand AddPeerCommand
        {
            get
            {
                return _AddPeerCommand = _AddPeerCommand ?? new DelegateCommand(x =>
                {

                });
            }
        }

        private ICommand _RemovePeerCommand;
        public ICommand RemovePeerCommand
        {
            get
            {
                return _RemovePeerCommand = _RemovePeerCommand ?? new DelegateCommand(x =>
                {

                });
            }
        }

        private ICommand _ConnectPeerCommand;
        public ICommand ConnectPeerCommand
        {
            get
            {
                return _ConnectPeerCommand = _ConnectPeerCommand ?? new DelegateCommand(x =>
                {

                });
            }
        }

        private ICommand _DisconnectPeerCommand;
        public ICommand DisconnectPeerCommand
        {
            get
            {
                return _DisconnectPeerCommand = _DisconnectPeerCommand ?? new DelegateCommand(x =>
                {

                });
            }
        }
    }
}
