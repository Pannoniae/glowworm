{"sturmpistole"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/bolt_action/"}
        {link_sound "mid"        "weapon/shot/smallarms/s3/d2/GER/K98k/Schiessbecher/"}
        {link_sound "far"        "weapon/shot/smallarms/s3/d3/GER/K98k/Schiessbecher/"}
    }
    {on "fire" 
        {delay 0.01
            {view hide "prop_flare"}
            {view hide "prop_rocket"}
        }
    }

    {on "weapon_reload"
        {delay 4
            {view show "prop_flare"}
            {delay 3
                {view show "prop_rocket"}
            }
        }
    }
}
{"fnab_43"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/open_bolt_SMG/Type2/"}
        {link_sound "mid"        "weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
        {link_sound "far"        "weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}
    }
}
{"grb_39"
    {on spawn
        {link_sound "open_bolt"        "weapon/reload/open_bolt/K98k/"}
        {link_sound "close_bolt"    "weapon/reload/close_bolt/K98k/"}
        {link_sound "action_recoil"    "weapon/action/recoil/bolt_action/"}
        {link_sound "mid"        "weapon/shot/smallarms/s3/d2/GER/K98k/Schiessbecher/"}
        {link_sound "far"        "weapon/shot/smallarms/s3/d3/GER/K98k/Schiessbecher/"}
    }

    {on "weapon_reload"
        {delay 0.01
            {view hide "prop_bullet01"}
        }
        {delay 8
            {view show "prop_bullet01"}
        }
    }
}
{"stuff weapon m50_reising"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/Shared/FN_Browning_HiPower_P35/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/Shared/FN_Browning_HiPower_P35/"}
		{add_view	"shell_pistol"	"smg_eject1"	"fxshell"}
	}
	{on "fire"
			{ani_play "bolt_action"}
			{view start "smg_eject1"}
	}
	("magazine" cut(1) show(2.9) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon m50_reising_30"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/Shared/FN_Browning_HiPower_P35/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/Shared/FN_Browning_HiPower_P35/"}
		{add_view	"shell_pistol"	"smg_eject1"	"fxshell"}
	}
	{on "fire"
			{ani_play "bolt_action"}
			{view start "smg_eject1"}
	}
	("magazine" cut(1) show(2.9) override(overload) impulse({impulse up -0.01}))
}

