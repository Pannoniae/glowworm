;/*=========== Extra German Vehicles Begin ===========*/
{"sdkfz251c_9 tank"
	("hanomag_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}
}
{"sdkfz251b"
	("hanomag_sound")

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}

	{on "gunner2_hatch_open" overload
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner4_hatch_open" overload
		{ani_play "mgun_aa_2" +1.0 resume}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "mgun_aa_2" -1.0 resume}
	}
}
{"88mmflak37sfl tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
		{link_sound "engine_start"		"vehicle/engine/sdkfz251/start"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz251/stop"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz251/idle"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz251/full"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz251/exhaust"}
		{link_sound "move"				"vehicle/tracks/sdkfz251"}
	}
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)		;// weapon reload time
	}
}
{"sdkfz251d_2 tank"
	("hanomag_sound")
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
}
{"zgkw303f tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
		{link_sound "engine_start"		"vehicle/engine/sdkfz251/start"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz251/stop"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz251/idle"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz251/full"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz251/exhaust"}
		{link_sound "move"				"vehicle/tracks/sdkfz251"}
	}
}
{"tiger_p tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/ferdinand/start"}
		{link_sound "engine_stop"		"vehicle/engine/ferdinand/stop"}
		{link_sound "engine_idle"		"vehicle/engine/ferdinand/idle"}
		{link_sound "engine_full"		"vehicle/engine/ferdinand/full"}
		{link_sound "exhaust"			"vehicle/engine/ferdinand/exhaust"}
		{link_sound "move"				"vehicle/tracks/ferdinand/"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_heavy"}
	}
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("MG34")
	}
}
{"flakpanzer1a tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz1/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz1/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz1/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz1/full"}
		{link_sound "exhaust"			"vehicle/engine/pz1/exhaust"}
		{link_sound "move"			"vehicle/tracks/pz1"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/small"}
	}
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
}
{"panzer2j tank"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("MG34")
	}
}
{"sdkfz301wanze tank"
	("hanomag_sound")
}
{"dicker_max tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("Cannon_Breech")
	}
}
{"geschuetzwagen_ivb tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz4/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz4/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"			"vehicle/tracks/pz4"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_heavy"}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
}
{"jagdpanzer_iv tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz4/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz4/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz4"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("MG42")
	}
}
{"marder139 tank"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}
}
{"stug4g tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz4/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz4/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz4"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("MG34")
	}
}
{"sdkfz7_1_early tank"
		{on "add_movement_sound" overload
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
		{link_sound "engine_start"		"vehicle/engine/sdkfz251/start"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz251/stop"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz251/idle"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz251/full"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz251/exhaust"}
		{link_sound "move"				"vehicle/tracks/sdkfz251"}
	}
	{on "add_weapon_sound" overload
		;("Autocannon_s1")
		("2cm_Flakvierling")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
}
{"sdkfz251c_10 tank"
	("hanomag_sound")

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}

	{on "gunner4_hatch_open" overload
		{ani_play "mgun_aa_2" +1.0 resume}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "mgun_aa_2" -1.0 resume}
	}
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}
}
{"stug3a tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
	}
}
{"tiger1e_early tank"
	("pz6_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("MG34")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}
{"panzer4f1_shielded tank"
	("pz4_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("MG34")
	}
}
{"sdkfz251b_10 tank"
	("hanomag_sound")

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}

	{on "gunner4_hatch_open" overload
		{ani_play "mgun_aa_2" +1.0 resume}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "mgun_aa_2" -1.0 resume}
	}
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}
}
;/*=========== Extra German Vehicles End ===========*/

;/*=========== Extra Soviet Vehicles Begin ===========*/
{"ba11 tank"
	("ba_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("DT")
	}
}
{"ba27m"
	("ba_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("DT")
	}
}
{"m3_rus"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/us_halftrack/start"}
		{link_sound "engine_stop"		"vehicle/engine/us_halftrack/stop"}
		{link_sound "engine_idle"		"vehicle/engine/us_halftrack/idle"}
		{link_sound "engine_full"		"vehicle/engine/us_halftrack/full"}
		{link_sound "exhaust"			"vehicle/engine/us_halftrack/exhaust"}
		{link_sound "move"			"vehicle/tracks/m3a1"}
	}
	{on "add_weapon_sound" overload
		("M2HB")
	}
}
{"m17"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/us_halftrack/start"}
		{link_sound "engine_stop"		"vehicle/engine/us_halftrack/stop"}
		{link_sound "engine_idle"		"vehicle/engine/us_halftrack/idle"}
		{link_sound "engine_full"		"vehicle/engine/us_halftrack/full"}
		{link_sound "exhaust"			"vehicle/engine/us_halftrack/exhaust"}
		{link_sound "move"			"vehicle/tracks/m3a1"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/small"}
	}
	{on "add_weapon_sound" overload
		("M2HB_M45_Mount")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
		{add_view	"flash_gun_big"	"flashbarrel02"	"shooter02"}
		{add_view	"flash_gun_big"	"flashbarrel03"	"shooter03"}
	}
	{on fire "mgun" overload
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
		{if  name "02"
			{view start "flashbarrel02"}
			{delay 0.2
				{view pause "flashbarrel02"}
			}
		else name "03"
			{view start "flashbarrel03"}
			{delay 0.2
				{view pause "flashbarrel03"}
			}
		}
	}
}
{"su57"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/us_halftrack/start"}
		{link_sound "engine_stop"		"vehicle/engine/us_halftrack/stop"}
		{link_sound "engine_idle"		"vehicle/engine/us_halftrack/idle"}
		{link_sound "engine_full"		"vehicle/engine/us_halftrack/full"}
		{link_sound "exhaust"			"vehicle/engine/us_halftrack/exhaust"}
		{link_sound "move"			"vehicle/tracks/m3a1"}
		{link_sound "rotate_turret" 		"vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
	}
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
}
{"su14 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz6/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz6/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz6/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz6/full"}
		{link_sound "exhaust"			"vehicle/engine/pz6/exhaust"}
		{link_sound "move"			"vehicle/tracks/kv/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
}
{"su5 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t26/start"}
		{link_sound "engine_stop"		"vehicle/engine/t26/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t26/idle"}
		{link_sound "engine_full"		"vehicle/engine/t26/full"}
		{link_sound "exhaust"			"vehicle/engine/t26/exhaust"}
		{link_sound "move"				"vehicle/tracks/t26/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
}
{"t18 tank"
	("t27_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("DT")
	}
}
{"t80 tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("DT")
	}
}
{"matilda2 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t70/start"}
		{link_sound "engine_stop"		"vehicle/engine/t70/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t70/idle"}
		{link_sound "engine_full"		"vehicle/engine/t70/full"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"			"vehicle/tracks/pz4/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("ZB37")
	}
}
{"su76i tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
	}
}
{"wolverine tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m4a2/start"}
		{link_sound "engine_stop"		"vehicle/engine/m4a2/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m4a2/idle"}
		{link_sound "engine_full"		"vehicle/engine/m4a2/full"}
		{link_sound "exhaust"			"vehicle/engine/m4a2/exhaust"}
		{link_sound "move"			"vehicle/tracks/m7"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("Cannon_Breech")
		("M2HB")
	}
}
{"m3lee_rus tank"
	("m3lee_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		{link_sound 		"action_recoil_Cannon2"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound	 	"Cannon_Mid2"		"weapon/shot/cannon/s3/d2/Shared/Cannon_75to76mm/"}
		{link_sound 		"Cannon_Far2"		"weapon/shot/cannon/s3/d3/Shared/Cannon_75to76mm/"}
		("M1919A4")
	}
}
{"kv8s tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("DT")
	}
	{on spawn
		{add_view "flamer_fire_tank" "flamer1" "foresight7"}
	}
	{on operatable on
		{view start "fire"}
	}
	{on operatable off
		{view stop "fire"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args flamer1 60 7 40)
	{on fire "gun" overload
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{ani_play "fire"}
		{ani_play "fire2"}
	}
}
{"t26_40 tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("DT")
	}
	{on spawn
		("rand_cut_else" args "cooler1" "cooler2")
	}
}
{"isu122 tank"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("DShK38")
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/is/start"}
		{link_sound "engine_stop"		"vehicle/engine/is/stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/is/full"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/is/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open_right" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_right" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}
{"kv1_122 tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("DT")
	}
	{on fire "gun"
		{ani_play "fire"}
		{ani_play "fire2"}
	}
}
;/*=========== Extra Soviet Vehicles end ===========*/
;/*=========== Extra US Vehicles Begin ===========*/
{"m3a1_satan" 
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("M1919A4")
	}
	{on spawn
		{add_view "flamer_fire_tank" "flame" "foresight1"}
		{add_view "flamer_fire_barrel" "fire" "foresight1"}
	}
	{on operatable on
		{view start "fire"}
	}
	{on operatable off
		{view stop "fire"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args gun 60 1 40)
}

{"m4a2_75 tank"
	("m4_sherman_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("M2HB")
		("M1919A4")
	}
	{on spawn
		{link_sound "move"				"vehicle/tracks/M4_Sherman/Steel/"}
		{if tex_mod "winter"
			{delay 0.1
				{tex_mod "usa_winter"}
			}
		else tex_mod "desert"
			{delay 0.1
				{tex_mod "usa"}
			}
		else tex_mod "camo"
			{delay 0.1
				{tex_mod "usa"}
			}
		else
			{delay 0.1
				{tex_mod "usa"}
			}
		}
	}
	{on "commander_hatch_open" overload
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "mgun_aa" -1.0 resume}
	}
}
{"m3_lee_m3 tank"
	("m3_lee_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		{link_sound 		"action_recoil_Cannon2"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound	 	"Cannon_Mid2"		"weapon/shot/cannon/s3/d2/Shared/Cannon_75to76mm/"}
		{link_sound 		"Cannon_Far2"		"weapon/shot/cannon/s3/d3/Shared/Cannon_75to76mm/"}
		("M1919A4")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
		{link_sound "move" "vehicle/tracks/M4_Sherman/Rubber/"}
	}
	{on fire "mgun1" overload
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
	{on break_armor					;// volume breaks
		{if volume "aux_turret2"
			{call "kill_commander"}
		}
	}
	{on break_armor_again			;// volume is broken again before related component is repaired
		{if volume "aux_turret2"
			{call "kill_commander"}
		}
	}
	{on break 
		{if component "aux_turret2"
			{weapon_work "mgun3" 0}
		}
	}
	{on repair
		{if component "aux_turret2"
			{weapon_work "mgun3" 1}
		}
	}
	(define "multi_turret_rotate"
		{on ik begin "%0" overload
			{kill_delay "rotate_turret%1"}
			{if not "rotate_turret%1"
				{play_sound "rotate_turret%1" 1}
				{set "rotate_turret%1" 1}
			}
		}
		{on ik end "%0" overload
			{delay 0.25 "rotate_turret%1"
				{stop_sound "rotate_turret%1"}
				{set "rotate_turret%1" 0}
			}
		}
	)
	("multi_turret_rotate" args aux_turret1 1)
	("multi_turret_rotate" args aux_turret2 2)
	("multi_gun_rotate" args gun1_rot)
}		
;/*=========== Extra US Vehicles end ===========*/



