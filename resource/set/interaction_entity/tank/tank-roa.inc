
;/*=========== ROA Vehicles Begin ===========*/
{"pzkpfw747_7641_ger tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on "cut_parts" overload
		("cut_part" args "part8" 1)
		("cut_part" args "part15" 1)
		{inherited}
	}
}
{"PzKw747_76_41_ger tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on "cut_parts" overload
		("cut_part" args "part8" 1)
		("cut_part" args "part15" 1)
		{inherited}
	}
}
{"pz754r tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("DT")
	}
}
{"bren_carrier_731"
	("universal_carrier_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
}
{"bren_carrier_731_ammo"
	("universal_carrier_sound")
	{on "add_weapon_sound" overload
		("MG42")
	}
}

{"p204_f_roa tank"
	("sdkfz234_sound") ;Placeholder
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("MAC31")
	}
}
{"panzer742r tank"
	("bt_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"stug3b_late_roa tank"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}
{"panzer35s_roa tank"
	("somua_s35_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("MAC31")
	}
}
{"pz756r tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
	{on break
		{if not tagged "exploded"
			{if component "detail2"
				{components "detail2" destroy}
			}
		}
		("shed_shield_part" args "detail2")
	}
}
{"jagdpanzer_su100r tank"
	("su85_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
	}
}
{"t34_kwk37 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("MG34")
	}
}
{"pz35t_roa tank"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("ZB37")
	}
	{##on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{##on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
{"pz38h_735_ss tank"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("MAC31")
	}
}
{"pz38t_a_roa tank"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("ZB37")
	}
}
{"panzer742r tank"
	("bt_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"panzer731r tank"
	("t27_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"sdkfz253wpzit tank"
	("hanomag_sound")

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}

	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun" overload
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
	{on break						;// {on break} is for when components break
		{if not tagged "exploded"
			{if component "turret"
				{weapon_work "mgun" 0}
			else component "gun"
				{weapon_work "mgun" 0}
			}
		}
	}
	{on repair
		{if component "turret"
			{if work "gun"
				{weapon_work "mgun" 1}
			}
		else component "gun"
			{if work "turret"
				{weapon_work "mgun" 1}
			}
		}
	}

	{on "add_weapon_sound" overload
		("MG13")
	}

}
{"sdkfz7_roa"
	("hanomag_sound")
}

{"sdkfz251d_37mm_f tank"
	("hanomag_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("MAC31")
	}
	{on spawn
		{add_view	"flash_gun_big"		"flashbarrel"			"foresight5"}
	}

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}

	{on "gunner4_hatch_open" overload
		{ani_play "mgun_aa_2" +1.0 resume}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "mgun_aa_2" -1.0 resume}
	}
}

{"sdkfz251d_2xgrw42 tank"
	("hanomag_sound")

	{on spawn
		{add_view "flash_cannon_small" "flashbarrel00" "shooter00"}
		{add_view "flash_cannon_small" "flashbarrel01" "shooter01"}
		{link_sound "whistle" "weapon/shot/mortar/whistle"}
		{link_sound "bkg_mortar" "weapon/shot/bkg/mortar/"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{play_sound "bkg_mortar"}
				{ani_play "fire%0"}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{if name "00"
			{call "fire_gun_common"}
		}
		;{ani_play "recoil"}
	}

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}

}

{"flampanzer1 tank"
	("pz1_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
	{on spawn
		("rand_cut_else" args "cooler1" "cooler2")
		{add_view "flamer_fire" "gun" "foresight1"}
		;{add_view	"flash_gun_big"	"flashbarrel00"	"foresight1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args gun 40 1 40)
}

{"ba20_roa"
	("ba_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"pzspvwg202r"
	("ba_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"pzspvwg202r_ger"
	("ba_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}

{"ba6_roa"
	("ba_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"ba6_ger"
	("ba_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"ba6_ger2"
	("ba_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"pzkpfw_kw_la753r tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"pzkpfw_kw_la753r_ger tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}

{"jagdpanzer_su76r tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t70/start"}
		{link_sound "engine_stop"		"vehicle/engine/t70/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t70/idle"}
		{link_sound "engine_full"		"vehicle/engine/t70/full"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/t70"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 5)		;// weapon reload time
	}
}
{"jagdpanzer_su76r_ger tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t70/start"}
		{link_sound "engine_stop"		"vehicle/engine/t70/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t70/idle"}
		{link_sound "engine_full"		"vehicle/engine/t70/full"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/t70"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 5)		;// weapon reload time
	}
}
{"m7518_roa tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}

{"m7534_roa tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}

{"t26_39_roa tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
	{on spawn
		("rand_cut_else" args "cooler1" "cooler2")
		("rand_cut" args "turret_light")
	}
	{on "lights_on"
		{ani_play "headlight"}
		{tags add "lights_on"}
	}
	{on "lights_off"
		{if tagged "lights_on"
			{ani_play "headlight" -1}
			{tags remove "lights_on"}
		}
	}
}

{"marder3h tank"
	("pz38_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)	;// weapon reload time
	}
}

{"marder135 tank"
	("t26_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)	;// weapon reload time
	}
}

{"sdkfz135_1 tank"
	("t26_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)		;// weapon reload time
	}
}

{"panzer1b_roa tank"
	{on "add_weapon_sound" overload
		("MG13")
	}
}

{"panzer742r_roa tank"
	("bt_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}

{"r35_roa tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
}

{"r39_roa tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
}
{"r39_ger tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
}

{"zis30_ger tank"
	("t27_sound")
}
{"zis30_ger2 tank"
	("t27_sound")
}
{"marder_1fcm_36 tank"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)	;// weapon reload time
	}
}
{"PzKw747_76_41 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
	{on "cut_parts" overload
		("cut_part" args "part8" 1)
		("cut_part" args "part15" 1)
		{inherited}
	}
}

{"pzkpfw34_7642 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}

{"PzKw747_57_43 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
}

{"PzKw747_85 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
}

{"sdkfz251c_dshk tank"
	("hanomag_sound")
	{on "add_weapon_sound" overload
		("DShK38")
	}
	{on "init_gun" overload
		{add_view "shell_hmgun" "shell" "fxshell"}
		{add_view "ejectsmoke_big" "ejectsmoke" "FXshell"}
		{add_view "flash_gun_big" "flashbarrel00" "shooter00"}
	}
	{on fire "mgun1"
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "action_recoil_HMG"}
		{view start "flashbarrel00"}
		{view start "shell"}
		{view start "ejectsmoke"}
		{delay 0.12
			{view pause "shell"}
			{view pause "ejectsmoke"}
			{view pause "flashbarrel00"}
		}
	}
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

{"ab41 tank"
	("sdkfz234_sound")
	{on "add_weapon_sound" overload
		("MAC31")
	}
}

{"pz38h_735_ss tank"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("MAC31")
	}
}
{"pzkpfw747_t34r_ausf_d tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}

{"panzer5a_vet tank"
	("pz5_sound")
	{on "add_weapon_sound" overload
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

{"hummel_ss tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz4/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz4/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz4"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)		;// weapon reload time
	}
}

{"werfer tank"
	("hanomag_sound")
	{on spawn
		{add_view "flash_cannon_small" "flashbarrel00" "shooter00"}
		{add_view "flash_cannon_small" "flashbarrel01" "shooter01"}
		{add_view "flash_cannon_small" "flashbarrel02" "shooter02"}
		{add_view "flash_cannon_small" "flashbarrel03" "shooter03"}
		{add_view "flash_cannon_small" "flashbarrel04" "shooter04"}
		{add_view "flash_cannon_small" "flashbarrel05" "shooter05"}
		{add_view "flash_cannon_small" "flashbarrel06" "shooter06"}
		{add_view "flash_cannon_small" "flashbarrel07" "shooter07"}
		{add_view "flash_cannon_small" "flashbarrel08" "shooter08"}
		{add_view "flash_cannon_small" "flashbarrel09" "shooter09"}
		{add_view "flash_cannon_small" "flashbarrel10" "shooter10"}
		{add_view "flash_cannon_small" "flashbarrel11" "shooter11"}
		{add_view "flash_cannon_small" "flashbarrel12" "shooter12"}
		{add_view "flash_cannon_small" "flashbarrel13" "shooter13"}
		{add_view "flash_cannon_small" "flashbarrel14" "shooter14"}
		{add_view "flash_cannon_small" "flashbarrel15" "shooter15"}
		{link_sound "whistle" "weapon/shot/mortar/whistle"}
		{link_sound "bkg_mortar" "weapon/shot/bkg/mortar/"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{play_sound "bkg_mortar"}
				{ani_play "fire%0"}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		else ("fire_barrel" args 04)
		else ("fire_barrel" args 05)
		else ("fire_barrel" args 06)
		else ("fire_barrel" args 07)
		else ("fire_barrel" args 08)
		else ("fire_barrel" args 09)
		else ("fire_barrel" args 10)
		else ("fire_barrel" args 11)
		else ("fire_barrel" args 12)
		else ("fire_barrel" args 13)
		else ("fire_barrel" args 14)
		else ("fire_barrel" args 15)
		}
		{if name "00"
			{call "fire_gun_common"}
		}
		{ani_play "recoil"}
		;{call "spawn_shell"}
	}

}

{"hetzer_auf tank"
	{on "add_weapon_sound" overload
		("MG42")
	}
	{on spawn
		{ani_wind "open" end}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/hetzer/start"}
		{link_sound "engine_stop"		"vehicle/engine/hetzer/stop"}
		{link_sound "engine_idle"		"vehicle/engine/hetzer/idle"}
		{link_sound "engine_full"		"vehicle/engine/hetzer/full"}
		{link_sound "exhaust"			"vehicle/engine/hetzer/exhaust"}
		{link_sound "move"				"vehicle/tracks/hetzer"}
	}
}

{"t26pak9738 tank"
	("t26_sound")
	{on "lights_on"
		{ani_play "headlight"}
		{tags add "lights_on"}
	}
	{on "lights_off"
		{if tagged "lights_on"
			{ani_play "headlight" -1}
			{tags remove "lights_on"}
		}
	}
}

{"t26_pak9738 tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "lights_on"
		{ani_play "headlight"}
		{tags add "lights_on"}
	}
	{on "lights_off"
		{if tagged "lights_on"
			{ani_play "headlight" -1}
			{tags remove "lights_on"}
		}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 3.2)
	}
}
{"t26_pak9738_ger tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "lights_on"
		{ani_play "headlight"}
		{tags add "lights_on"}
	}
	{on "lights_off"
		{if tagged "lights_on"
			{ani_play "headlight" -1}
			{tags remove "lights_on"}
		}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 3.2)
	}
}

{"sdkfz251c_roa tank"
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
{"ba20_roa"
	("ba_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"pzspwgf204r tank"
	("ba_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"t26_39_roa tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
	{on spawn
		("rand_cut_else" args "cooler1" "cooler2")
		("rand_cut" args "turret_light")
	}
	{on "lights_on"
		{ani_play "headlight"}
		{tags add "lights_on"}
	}
	{on "lights_off"
		{if tagged "lights_on"
			{ani_play "headlight" -1}
			{tags remove "lights_on"}
		}
	}
}
{"panzer4f1_sh tank"
	("pz4_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("MG34")
	}
}
{"PzKw747_76_41 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"pzkpfw747_7641 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"pzkpfw747_7641_ger tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"pzkpfw34_7642 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"PzKw747_57_43 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"pzkw747_85 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"stug3b_roa tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}
{"jagdpanzer_su76r tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t70/start"}
		{link_sound "engine_stop"		"vehicle/engine/t70/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t70/idle"}
		{link_sound "engine_full"		"vehicle/engine/t70/full"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/t70"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 5)		;// weapon reload time
	}
}
{"marder139 tank"
	("pz38_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)	;// weapon reload time
	}
}
{"marder2_roa tank"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)	;// weapon reload time
	}
}
{"t26pak9738 tank"
	("t26_sound")
}
{"stug3f_roa tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}
{"hetzer_roa tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/hetzer/start"}
		{link_sound "engine_stop"		"vehicle/engine/hetzer/stop"}
		{link_sound "engine_idle"		"vehicle/engine/hetzer/idle"}
		{link_sound "engine_full"		"vehicle/engine/hetzer/full"}
		{link_sound "exhaust"			"vehicle/engine/hetzer/exhaust"}
		{link_sound "move"				"vehicle/tracks/hetzer"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}
{"t60r_ger"
	("t70_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"t60r_late tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"jagdpanzer_su85r tank"
	("su85_sound")
}
{"sdkfz251d_1_roa tank"
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
{"carrier_731_flak38 tank"
	("universal_carrier_sound")
}
{"bison_roa_late tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz1/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz1/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz1/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz1/full"}
		{link_sound "exhaust"			"vehicle/engine/pz1/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz1"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on pierce overload
		{if volume "turret"
			;do nothing    ;// disables kill_crew events when turret is pen. Calls for kill_crew are in gun_shield code for this vehicle.
		else
			{inherited}
		}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 25)		;// weapon reload time
	}
}
{"ba20_command_roa"
	("ba_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
	{on "commander_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
{"sdkfz250a_1_roa tank"
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
{"sdkfz250a_9_roa tank"
	("hanomag_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
	{on spawn
		{ani_wind "open" end}
	}

	{on "zenite_terrain_fx" overload} ; // overwrites and stops dust fx on ground from firing main gun

	{##on "commander_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{##on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
{"sdkfz250a_11_roa tank"
	("hanomag_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}

	{on "gunner4_hatch_open" overload
		{ani_play "mgun_aa_2" +1.0 resume}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "mgun_aa_2" -1.0 resume}
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.15 0.1)
	}
	{on "reload_delay" overload
		("reload_time" args 2.0)
	}
}
{"sdkfz251c_2_roa tank"
	("hanomag_sound")

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}

	{on "gunner4_hatch_open" overload
		{ani_play "mgun_aa_2" +1.0 resume}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "mgun_aa_2" -1.0 resume}
	}
}
{"panzer731r_roa tank"
	("t27_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}
{"pz35t_roa tank"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("ZB37")
	}
	{##on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{##on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
{"pz38t_a_roa tank"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("ZB37")
	}
}
{"pz38t_f_roa tank"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("ZB37")
	}
	{on break
		{if not tagged "exploded"
			{if component "shieldw1"
				{components "shieldw2" destroy}
			}
		}
	}
}
{"pzkpfw_kv1b_753r tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
}
{"pz756r_roa tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
	{on break
		{if not tagged "exploded"
			{if component "detail2"
				{components "detail2" destroy}
			}
		}
		("shed_shield_part" args "detail2")
	}
}
{"jagdpanzer_su100r tank"
	("su85_sound")
}

{"sdkfz234_w_luchs tank"
	("sdkfz234_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
	{on spawn
		{ani_wind "open" end}
	}
}
{"t34_kwk37 tank"
	("t34_sound")
	{on "add_weapon_sound" overload
		("MG34")
	}
	{on "commander_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
{"pz740r tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
	{on spawn
		("rand_cut_else" args "cooler1" "cooler2")
		("rand_cut" args "turret_light")
	}
	{on "lights_on"
		{ani_play "headlight"}
		{tags add "lights_on"}
	}
	{on "lights_off"
		{if tagged "lights_on"
			{ani_play "headlight" -1}
			{tags remove "lights_on"}
		}
	}
}
{"pz740r_ger tank"
	("t26_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
	{on spawn
		("rand_cut_else" args "cooler1" "cooler2")
		("rand_cut" args "turret_light")
	}
	{on "lights_on"
		{ani_play "headlight"}
		{tags add "lights_on"}
	}
	{on "lights_off"
		{if tagged "lights_on"
			{ani_play "headlight" -1}
			{tags remove "lights_on"}
		}
	}
}

;/*=========== Generic Vehicles End ===========*/
