﻿using CozyGod.Game.CardLibrary;
using CozyGod.Game.Craft;
using CozyGod.Game.Interface;
using CozyGod.Game.Raffle;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CozyGod.Game.Engine
{
    public class CozyGodEngine : ICozyGodEngine
    {
        private ICraft craft = new CraftImpl();
        private IRaffle raffle = new RaffleImpl();
        private ICardLibrary cardLibrary = new CardLibraryImpl();

        public void Init()
        {
        }

        public ICraft GetCraft()
        {
            return craft;
        }

        public IRaffle GetRaffle()
        {
            return raffle;
        }

        public ICardLibrary GetCardLibrary()
        {
            return cardLibrary;
        }
    }
}
