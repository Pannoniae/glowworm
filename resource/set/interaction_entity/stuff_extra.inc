;---------------------MACE
{"ruby"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/pistol/"}
        {link_sound "mid"        "weapon/shot/smallarms/s1/d2/Shared/FN_Browning_HiPower_P35/"}
        {link_sound "far"        "weapon/shot/smallarms/s1/d3/Shared/FN_Browning_HiPower_P35/"}
    }
}
{"sig_mkms"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/open_bolt_SMG/Type2/"}
        {link_sound "mid"        "weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
        {link_sound "far"        "weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}
    }
}

{"20mm_fliegerfaust"
	{on "link_human"
		{delay 0.6
			{ani_play "deploy" -1}
		}
	}
	{on "unlink_human"
		{ani_play "deploy" 1}
	}
	{on "link"					;// linked to vehicle
		{ani_wind "deploy" begin}
	}
	{on "link_open"				;// linked to vehicle opened
		{ani_wind "deploy" end}
	}
	{on "weapon_reload"
		{ani_play "reload"}
		{view hide "bullet1"}
		{view hide "bullet2"}
		{view hide "bullet3"}
		{view hide "bullet4"}
		{view hide "bullet5"}
		{view hide "bullet6"}
		{view hide "bullet7"}
		{view hide "bullet8"}
		{view hide "bullet9"}
	{delay 5
			{view show "bullet1"}
			{view show "bullet2"}
			{view show "bullet3"}
			{view show "bullet4"}
			{view show "bullet5"}
			{view show "bullet6"}
			{view show "bullet7"}
			{view show "bullet8"}
			{view show "bullet9"}
		}
	}
}

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
{"mauser_m96"            
    {on spawn
        {link_sound "open_bolt"        "weapon/reload/open_bolt/K98k/"}
        {link_sound "close_bolt"    "weapon/reload/close_bolt/K98k/"}
        {link_sound "action_recoil"    "weapon/action/recoil/bolt_action/"}
        {link_sound "mid"        "weapon/shot/smallarms/s3/d2/GER/K98k/"}
        {link_sound "far"        "weapon/shot/smallarms/s3/d3/GER/K98k/"}
    }
}
{"ag_m42"            
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/closed_bolt/"}
        {link_sound "mid"        "weapon/shot/smallarms/s3/d2/GER/G43/"}
        {link_sound "far"        "weapon/shot/smallarms/s3/d3/GER/G43/"}
    }
}
{"carl_gustaf_m_45"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/open_bolt_SMG/Type2/"}
        {link_sound "mid"        "weapon/shot/smallarms/s1/d2/RUS/PPS43/"}
        {link_sound "far"        "weapon/shot/smallarms/s1/d3/RUS/PPS43/"}
    }
}
{"beretta_m38a"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/open_bolt_SMG/Type2/"}
        {link_sound "mid"        "weapon/shot/smallarms/s1/d2/RUS/PPS43/"}
        {link_sound "far"        "weapon/shot/smallarms/s1/d3/RUS/PPS43/"}
    }
}
{"rmn_50"
    {on spawn
        {link_sound "open_bolt"        "weapon/reload/open_bolt/MN9130/"}
        {link_sound "close_bolt"    "weapon/reload/close_bolt/MN9130/"}
        {link_sound "action_recoil"    "weapon/action/recoil/bolt_action/"}
        {link_sound "mid"        "weapon/shot/smallarms/s3/d2/RUS/M9130/Dyakonov/"}
        {link_sound "far"        "weapon/shot/smallarms/s3/d3/RUS/M9130/Dyakonov/"}
    }
    {on "weapon_reload" 
        {delay 0.01
            {view hide "grenade_prop01"}
        }
        {delay 4
            {view show "grenade_prop01"}
        }
    }
}
{"al_43"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/closed_bolt/StG44/"}
        {link_sound "mid"        "weapon/shot/smallarms/s2/d2/GER/StG44/"}
        {link_sound "far"        "weapon/shot/smallarms/s2/d3/GER/StG44/"}
    }
}
{"sig_mkps"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/open_bolt_SMG/Type2/"}
        {link_sound "mid"        "weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
        {link_sound "far"        "weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}
    }
}
{"fnab_43"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/open_bolt_SMG/Type2/"}
        {link_sound "mid"        "weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
        {link_sound "far"        "weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}
    }
}
{"ppk_42"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/open_bolt_SMG/Type2/"}
        {link_sound "mid"        "weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
        {link_sound "far"        "weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}
    }
}
{"ppt27"
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
{"wz35"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/AT_Rifle/bolt_action/"}
        {link_sound "mid"        "weapon/shot/smallarms/s4/d2/RUS/PTR/"}
        {link_sound "far"        "weapon/shot/smallarms/s4/d3/RUS/PTR/"}
    }

    {on "weapon_reload"
        {delay 0.01
            {view hide "prop_bullet01"}
            {view hide "prop_bullet02"}
        }
        {delay 1
            {view show "prop_bullet01"}
            {view show "prop_bullet02"}
        }
    }
}

{"carcano"					;// props added to all AT4 Variants
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/FIN/M39/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/FIN/M39/"}
	}
}	
{"as44"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/SVT40/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/SVT40/"}
	}

	{on "weapon_reload"
		{delay 0.01
			{view hide "prop_bullet01"}
		}
        {delay 2.25
			{view show "prop_bullet01"}
		}
	}
}
{"rpd"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{ani_wind "bipod_open" begin}
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG13/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG13/"}
	}
	{on "link_human"
		{delay 0.6
			{ani_play "bipod_open"}
		}
	}
	{on "unlink_human"
		{ani_play "bipod_open" -1}
	}
	{on "link"					;// linked to vehicle
		{ani_wind "bipod_open" begin}
	}
	{on "link_open"				;// linked to vehicle opened
		{ani_wind "bipod_open" end}
	}

    {on "weapon_reload"
		{delay 0.01
			{view hide "prop_bullet01"}
			{view hide "prop_bullet02"}
			{view hide "prop_bullet03"}
			{view hide "prop_bullet04"}
			{view hide "prop_bullet05"}
			{view hide "prop_bullet06"}
			{view hide "prop_bullet07"}
			{view hide "prop_bullet08"}
			{view hide "prop_bullet09"}
			{view hide "prop_bullet10"}
			{view hide "prop_bullet11"}
			{view hide "prop_bullet12"}
            {view hide "prop_bullet13"}
			{view hide "prop_bullet14"}
			{view hide "prop_bullet15"}
			{view hide "prop_bullet16"}
			{view hide "prop_bullet17"}
            {view hide "prop_bullet18"}
		}
        {delay 2.25
			{view show "prop_bullet01"}
			{view show "prop_bullet02"}
			{view show "prop_bullet03"}
			{view show "prop_bullet04"}
			{view show "prop_bullet05"}
			{view show "prop_bullet06"}
			{view show "prop_bullet07"}
			{view show "prop_bullet08"}
			{view show "prop_bullet09"}
			{view show "prop_bullet10"}
			{view show "prop_bullet11"}
			{view show "prop_bullet12"}
            {view show "prop_bullet13"}
			{view show "prop_bullet14"}
			{view show "prop_bullet15"}
			{view show "prop_bullet16"}
			{view show "prop_bullet17"}
            {view show "prop_bullet18"}
		}
    }
}

{"stuff weapon Lee_Enfield_No4MkI_Bayonet"
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/K98k/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/K98k/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/USA/lee_enfield/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/USA/lee_enfield/"}
	}
	{on "weapon_reload" 
			{view hide "bullet1"}
			{view hide "bullet2"}
			{view hide "bullet3"}
		{delay 4
			{view show "bullet1"}
			{view show "bullet2"}
			{view show "bullet3"}
		}
	}
}
{"stuff weapon Lee_Enfield_No4MkI_T"
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/K98k/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/K98k/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/USA/lee_enfield/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/USA/lee_enfield/"}
	}
	{on "weapon_reload" 
			{view hide "bullet1"}
			{view hide "bullet2"}
			{view hide "bullet3"}
		{delay 4
			{view show "bullet1"}
			{view show "bullet2"}
			{view show "bullet3"}
		}
	}
}
{"stuff weapon Lee_Enfield_No4MkI"
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/K98k/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/K98k/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/USA/lee_enfield/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/USA/lee_enfield/"}
	}
	{on "weapon_reload" 
			{view hide "bullet1"}
			{view hide "bullet2"}
			{view hide "bullet3"}
		{delay 4
			{view show "bullet1"}
			{view show "bullet2"}
			{view show "bullet3"}
		}
	}
}
{"stuff weapon sten_mkii"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/USA/Sten/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d3/USA/Sten/"}
		{add_view	"shell_pistol"	"smg_eject1"	"fxshell"}
	}
	{on "weapon_reload" overload
			{view hide "bullet"}
			{call "magazine_delay"}
	}
	{on "fire"
			{view start "smg_eject1"}
	}
	("magazine" cut(0.1) show(2.9) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon sten_mkii_1"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/USA/Sten/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d3/USA/Sten/"}
		{add_view	"shell_pistol"	"smg_eject1"	"fxshell"}
	}
	("magazine" cut(1) show(2.8) override(overload) impulse({impulse up -0.01}))
	{on "fire"
			{view start "smg_eject1"}
	}
}

{"stuff weapon sten_mkiis"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/Shared/Surpressed_Pistol/"}
		{add_view	"shell_pistol"	"smg_eject1"	"fxshell"}
	}
	("magazine" cut(1) show(2.8) override(overload) impulse({impulse up -0.01}))
	{on "fire"
			{view start "smg_eject1"}
	}
}


{"stuff weapon sten_mkv_1"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/USA/Sten/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d3/USA/Sten/"}
		{add_view	"shell_pistol"	"smg_eject1"	"fxshell"}
	}
	("magazine" cut(1) show(2.8) override(overload) impulse({impulse up -0.01}))
	{on "fire"
			{view start "smg_eject1"}
	}
}

{"stuff weapon sten_mkv_bayonet"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/USA/Sten/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d3/USA/Sten/"}
		{add_view	"shell_pistol"	"smg_eject1"	"fxshell"}
	}
	("magazine" cut(1) show(2.8) override(overload) impulse({impulse up -0.01}))
	{on "fire"
			{view start "smg_eject1"}
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

{"stuff weapon johnson_rifle"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/SVT40/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/SVT40/"}
	}
	{on "fire"
		{ani_play "bolt_action"}
	}
	{on "weapon_reload" overload
		{ani_play "reload"}
		{view hide "bullet"}
		{view hide "bullet2"}
		{view hide "bullet3"}
		{view hide "bullet4"}
	{delay 4
			{view show "bullet"}
			{view show "bullet2"}
			{view show "bullet3"}
			{view show "bullet4"}
		}
	}
}

{"stuff bren_mki"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/USA/Bren/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/USA/Bren/"}
		{add_view	"shell_mgun"	"mgun_eject1"	"fxshell"}
	}
	{on "weapon_reload" 
		{delay 0.1
			{view hide "ammo"}
		}
		{delay 4
			{ani_play "reload"}
		}
		{delay 4.5
			{view show "ammo"}
		}
	}
	("magazine" cut(1) show(2.9) override(overload) impulse({impulse up -0.01}))
	{on "fire"
			{view start "mgun_eject1"}
	}
}

{"stuff weapon johnson_m1941_lmg"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/FG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/FG42/"}
		{add_view	"shell_mgun"	"mgun_eject1"	"fxshell"}
	}
	{on "weapon_reload" overload
		{delay 0.1
			{kill_delay "recoil"}
			{ani_play "reload"}
			{view hide "bullet"}
			{view hide "bullet2"}
			{view hide "bullet3"}
			{view hide "ammo"}
			{call "magazine_delay"}
		}
		{delay 3.5
			{view show "bullet"}
			{view show "bullet2"}
			{view show "bullet3"}
			{view show "ammo"}
		}
	}
	("magazine" cut(1) show(2.9) override(overload) impulse({impulse up -0.01}))
	{on "fire"
			{view start "mgun_eject1"}
	}
}

{"stuff weapon piat_mki"
	{on spawn
		{link_sound "mid"		"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"		"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
	{on "fire"
		{view hide "piatrocket"}
		{delay 4.5
				{view show	"piatrocket"}
		}
	}
}

{"stuff weapon bazooka_m20_new"
	{on spawn
		{link_sound "mid"		"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"		"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
	{on "fire"
		{view hide "rocket"}
		{delay 3.5
				{view show	"rocket"}
		}
	}
}

{"stuff bazooka_m1a1_new"
	{on spawn
		{link_sound "mid"		"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"		"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
	{on "fire"
		{view hide "rocket"}
		{delay 3.5
				{view show	"rocket"}
		}
	}
}

{"stuff weapon ppsh41_9mm_drum"						;// props added to PPD 40
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_SMG/Type2/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}
	}
	("magazine" cut(1.85) show(1.75) override(overload) impulse({impulse up -0.01}))
}


{"stuff weapon KPVT_AA"
	{on spawn
		{link_sound 		"action_recoil_HMG"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound 		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on "fire"
		{ani_play "fire" 1}
	}	
	{on "weapon_reload" overload
			{view hide "bullet"}
			{call "magazine_delay"}
	}
	("magazine" cut(0.1) show(6) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon boys_mk_modded"					;// props added to 14 mm PST KIV37:
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/AT_Rifle/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s4/d2/RUS/PTR/"}		; Placeholder
		{link_sound "far"		"weapon/shot/smallarms/s4/d3/RUS/PTR/"}		; Placeholder
		{add_view	"shell_hmgun"	"shell_eject"	"fxshell1"}
	}
	{on "weapon_reload" overload		
			{call "magazine_delay"}
	}
	{on "fire"
		{delay 0.5
			{view start "shell_eject"}
		}
	}
	("magazine" cut(1.00) show(2.75) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon RPG1"
	{on spawn 
		{ani_wind "bipod_open" begin}
	}
	{on "link_human"
		{delay 0.6
			{ani_play "bipod_open"}
		}
	}
	{on "unlink_human"
		{ani_play "bipod_open" -1}
	}
	{on "link"					;// linked to vehicle
		{ani_wind "bipod_open" begin}
	}
	{on "link_open"				;// linked to vehicle opened
		{ani_wind "bipod_open" end}
	}
	{on "fire"
        	{view hide "rocket"}
    		{delay 4
        		{view show "rocket"}
        	}
	}
}

{"stuff weapon mg131"
	{on spawn
		{link_sound 		"action_recoil_HMG"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound 		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on "weapon_reload" 
		{delay 0.2		
			{view hide "magazine"}
			{view hide "ammo2"}
			{delay 1.5
				{view hide "pin"}
			}
			{delay 6
				{view show "pin"}
			}
		}
	}
}

{"stuff weapon winchester_1895"
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/K98k/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/K98k/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/USA/lee_enfield/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/USA/lee_enfield/"}
		{add_view	"shell_rifles"	"rifle_eject1"	"fxshell"}
	}
	{on "fire"
		{delay 0.1
			{view start "rifle_eject1"}
			{ani_play "bolt_action" 1}
		}
        }
}

{"stuff lewis_gun"
    {on spawn
        {link_sound "action_recoil"    "weapon/action/recoil/open_bolt_MG/"}
        {link_sound "mid"        "weapon/shot/smallarms/s1/d2/USA/Bren/"}
        {link_sound "far"        "weapon/shot/smallarms/s1/d3/USA/Bren/"}
        {add_view    "shell_mgun"    "mgun_eject1"    "fxshell"}
    }
    {on "weapon_reload" 
        {delay 0.1
            {view hide "ammo"}
        }
        {delay 4
            {ani_play "reload"}
        }
        {delay 4.5
            {view show "ammo"}
        }
    }
    ("magazine" cut(1) show(2.9) override(overload) impulse({impulse up -0.01}))
    {on "fire"
            {view start "mgun_eject1"}
    }
}

{"bazooka_m20_new"
	("at_weapon_icon" icon(icon_m9bazooka))
}
{"bazooka_m20_new"
	("at_weapon_icon" icon(icon_m9bazooka))
	{on "fire"
		{delay 1
			{view stop "wp_view"}
		}
	}	
}

{"piat_mki"
	("at_weapon_icon" icon(icon_piat_mki))
}
{"piat_mki"
	("at_weapon_icon" icon(icon_piat_mki))
	{on "fire"
		{delay 1
			{view stop "wp_view"}
		}
	}	
}

