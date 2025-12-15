
(define "cannon_big_fra"
	{on "add_movement_sound" overload ;// split add movements into separate define and nest this one into it. separate so different turret/gun rotate sounds can be added.
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
	}

	{on spawn
		{link_sound "wheel_ground"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_snow"		"vehicle/cannon_roll/overlays/cannon_overlay_snow"}
		{link_sound "wheel_road"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_rock"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_wood"		"vehicle/cannon_roll/overlays/cannon_overlay_wood"}
		{if tex_mod "winter"
			{delay 0.1
				{tex_mod "fra_winter"}
			}
		else tex_mod "desert"
			{delay 0.1
				{tex_mod "fra"}
			}
		else tex_mod "camo"
			{delay 0.1
				{tex_mod "fra"}
			}
		else
			{delay 0.1
				{tex_mod "fra"}
			}
		}
	}
)
(define "cannon_big_eng"
	{on "add_movement_sound" overload ;// split add movements into separate define and nest this one into it. separate so different turret/gun rotate sounds can be added.
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
	}

	{on spawn
		{link_sound "wheel_ground"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_snow"		"vehicle/cannon_roll/overlays/cannon_overlay_snow"}
		{link_sound "wheel_road"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_rock"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_wood"		"vehicle/cannon_roll/overlays/cannon_overlay_wood"}
		{if tex_mod "winter"
			{delay 0.1
				{tex_mod "ewinter"}
			}
		else tex_mod "desert"
			{delay 0.1
				{tex_mod "e"}
			}
		else tex_mod "camo"
			{delay 0.1
				{tex_mod "e"}
			}
		else
			{delay 0.1
				{tex_mod "e"}
			}
		}
	}
)
(define "cannon_big_ita"
	{on "add_movement_sound" overload ;// split add movements into separate define and nest this one into it. separate so different turret/gun rotate sounds can be added.
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
	}

	{on spawn
		{link_sound "wheel_ground"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_snow"		"vehicle/cannon_roll/overlays/cannon_overlay_snow"}
		{link_sound "wheel_road"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_rock"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_wood"		"vehicle/cannon_roll/overlays/cannon_overlay_wood"}
		{if tex_mod "winter"
			{delay 0.1
				{tex_mod "ita_winter"}
			}
		else tex_mod "desert"
			{delay 0.1
				{tex_mod "ita"}
			}
		else tex_mod "camo"
			{delay 0.1
				{tex_mod "ita"}
			}
		else
			{delay 0.1
				{tex_mod "ita"}
			}
		}
	}
)

(define "cannon_small_ita"
	{on "add_movement_sound" overload ;// split add movements into separate define and nest this one into it. separate so different turret/gun rotate sounds can be added.
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/small"}
	}

	{on spawn
		{link_sound "wheel_ground"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_snow"		"vehicle/cannon_roll/overlays/cannon_overlay_snow"}
		{link_sound "wheel_road"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_rock"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_wood"		"vehicle/cannon_roll/overlays/cannon_overlay_wood"}
		{if tex_mod "winter"
			{delay 0.1
				{tex_mod "ita_winter"}
			}
		else tex_mod "desert"
			{delay 0.1
				{tex_mod "ita"}
			}
		else tex_mod "camo"
			{delay 0.1
				{tex_mod "ita"}
			}
		else
			{delay 0.1
				{tex_mod "ita"}
			}
		}
	}
)

;/*=========== US Begin ===========*/

{"np_40_mm_m1"
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.35) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_small")
}

{"np_37_mm_m3"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.05)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"np_75_mm_m1"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 0.8)
		("cut_part" args "part2" 0.8)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_small")
}
{"np_75_mm_m1897a4"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_small")
}

{"np_75_mm_m1897a2"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_small")
}


{"np_76_mm_m5"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 4)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 0.8)
		("cut_part" args "part2" 0.8)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}	
	("cannon_small")
}

{"np_76_mm_m5late"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 4)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		{inherited}
	}

	("cannon_small")
}

{"np_90_mm_m1"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 5.0)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 0.8)
		("cut_part" args "part2" 0.8)
		("cut_part" args "part3" 1)
		{inherited}
	}
	("cannon_big")
}

{"np_105_mm_m2a1l"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 10)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 0.8)
		("cut_part" args "part2" 0.8)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_big")
}

{"np_155_mm_m1"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}

	("cannon_big")
}

{"np_155_mm_m2"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}

	{on "cut_parts" overload
		("cut_part" args "wheelR" 1)
		{inherited}
	}

	("cannon_big")
}

{"np_155mm_gpf"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}

	{on "cut_parts" overload
		("cut_part" args "wheelR" 1)
		{inherited}
	}

	("cannon_big")
}

{"np_0_5cal_maxson"				
	("handle_ik")
	{on "init_gun"
		{add_view "flash_gun_hmg_dshk"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel01"	"shooter01"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel02"	"shooter02"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel03"	"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
		{call "update_gun"}
	}
	{on "add_movement_sound"
		{link_sound "rotate_turret" "vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" "vehicle/turret/gun/gun_vertical"}
	}
	{on fire "mgun1" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		}
		{ani_play "recoil"}
		{call "spawn_shell"}
	}
}

;/*=========== US End ===========*/

;/*=========== British Begin ===========*/
{"np_oerlikon_mk2"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	("cannon_small")
}
{"np_qf40mm"
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}
	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.35) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}
	("cannon_small")
}
{"np_qf2pdr"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.05)
	}
	("cannon_small")
}
{"np_qf75mm_mk1"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}
	("cannon_small")
}
{"np_qf6pdr"
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}
	("cannon_small")
}
{"np_qf6pdr_late"
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}
	("cannon_small")
}
{"np_qf17pdr_42"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.40 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)
	}
	("cannon_small")
}
{"np_qf17pdr"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.40 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)
	}
	("cannon_small")
}
{"np_75_mm_m1a1"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_shallow" overload
		("cannon_sandbag" args "sandbag_cannon_shallow" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_small")
}
{"np_qf18pdr"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_shallow" overload
		("cannon_sandbag" args "sandbag_cannon_shallow" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_small")
}
{"np_qf3,7inch"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_big")
}
{"np_qf3,7inch_armor"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}

	("cannon_big")
}
{"np_qf25pdr_early"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_shallow" overload
		("cannon_sandbag" args "sandbag_cannon_shallow" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_small")
}
{"np_qf25pdr"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_shallow" overload
		("cannon_sandbag" args "sandbag_cannon_shallow" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_small")
}
{"np_bl45"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"np_bl6-inch"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	("cannon_big")
}
{"np_bl72"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	("cannon_big")
}
{"np_bl7_2-inch"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	("cannon_big")
}

{"np_76mm_mk_ii"
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
}
{"np_107mm_mk_ii"
	{on "add_weapon_sound" overload
		("Mortar_12cm")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
}
{"np_land_mattress"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	("cannon_small")
}
;/*=========== British End ===========*/

;/*=========== French Begin ===========*/
{"7_5mm_reibel_aa_x2"
	{on "init_gun" overload
		{add_view "shell_mgun" "shell1" "fxshell1"}
		{add_view "shell_mgun" "shell2" "fxshell2"}
		{add_view "ejectsmoke_big" "ejectsmoke1" "FXshell1"}
		{add_view "ejectsmoke_big" "ejectsmoke2" "FXshell2"}
		{add_view "flash_gun_big" "flashbarrel00" "shooter00"}
		{add_view "flash_gun_big" "flashbarrel01" "shooter01"}
	}
	{on fire "mgun1" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{delay 0.2 "fire"
					{view pause "flashbarrel%0"}
				}
				{play_sound "MG_Mid"}
				{play_sound "MG_Far"}
				{play_sound "action_recoil"}
				{kill_delay "shell_off%1"}
				{view start "shell%1"}
				{view start "ejectsmoke%1"}
				{delay 0.12 "shell_off%1"
					{view pause "shell%1"}
					{view pause "ejectsmoke%1"}
				}
		)
		{if	("fire_barrel" args 00 1)
		else ("fire_barrel" args 01 2)
		}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
}
{"13mm_hotchkiss"
	("handle_ik")
	{on "init_gun"
		{add_view "flash_gun_hmg_dshk"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{call "update_gun"}
	}
	{on "add_movement_sound"
		{link_sound "rotate_turret" "vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" "vehicle/turret/gun/gun_vertical"}
	}
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	{on "reload" overload
		{call "magazine_delay"}
		{call "crew_reload_ani"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
	(define "magazine_type_93"
		{on "magazine_delay" %override
			{delay %cut
				{tear "piece_small_steel" bone "magazine%no1" copy
					%impulse
				}
				{delay 0
					{view hide "magazine%no1"}
					{delay %show
						{view show "magazine%no1"}
					}
				}
				{tear "piece_small_steel" bone "magazine%no2" copy
					%impulse
				}
				{delay 0
					{view hide "magazine%no2"}
					{delay %show
						{view show "magazine%no2"}
					}
				}
			}
		}
	)
	("magazine_type_93" no1(1) no2(2) cut(0) show(1.8) override() impulse({impulse up -0.01 com}))
}
{"25mm_hotchkiss_mle38"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	("cannon_small")
}
{"25mm_hotchkiss_mle34"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 2.5)
	}
	("cannon_small")
}
{"qf2pdr_fr"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.05)
	}
	("cannon_small")
}
{"40_mm_m1_fr"
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}
	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.35) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}
	("cannon_small")
}
{"47mm_puteaux_mle37"
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 4.5)
	}
	("cannon_small")
}
{"57_mm_m1_fr"
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}
	("cannon_small")
}
{"75mm_mle1897"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"75_mm_m1897a2_fr"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"75_mm_m1897a4_fr"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"81mm_brandt_fra"
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
}
{"81_mm_m1_fr"
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
}
{"105mm_mle1913"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"105mm_mle1934"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"105_mm_m2a1l_fr"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"105_mm_m3_fr"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"155mm_m1917a4"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}

	("cannon_big")
}
{"155_mm_m1918"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}

	("cannon_big")
}
{"155mm_gpf"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	("cannon_big")
}
{"155mm_gpf_late"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	("cannon_big")
}
{"22cm_mortier"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 70)
	}
	("cannon_big")
}
;/*=========== French End ===========*/

;/*=========== Hungarian Begin ===========*/
{"2cm_solothurn_hun"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
}
{"4cm_40m"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.25 0.2)
	}
	{on "reload_delay" overload
		("reload_time" args 3)
	}
	("cannon_small")
}
{"4cm_bofors_36m"
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}
	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.35) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}
	("cannon_small")
}
{"5cm_38m"
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 4.5)
	}
	("cannon_small")
}
{"7_5cm_pak97_38_hun"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 3.5)
	}
	("cannon_small")
}
{"7_5cm_40m"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)
	}
	("cannon_small")
}
{"8cm_bofors_29m"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_big")
}
{"81mm_brandt_hun"
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
}
{"8cm_feldkanone"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_shallow" overload
		("cannon_sandbag" args "sandbag_cannon_shallow" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_small")
}
{"10cm_37m"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"15cm_feldhaubitze"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	("cannon_big")
}
{"15cm_43m"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
}
{"21cm_44m_buzoganyveto"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
}
{"21cm_39m"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 70)
	}
	("cannon_big")
}
;/*=========== Hungarian End ===========*/

;/*=========== Italian Begin ===========*/
{"cannone_2065"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	("cannon_small_ita")
}
{"2cm_solothurn"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
}
{"cannone_4732"
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 4.5)
	}
	("cannon_small_ita")
}
{"cannone_7527"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"7_5cm_pak97_38"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 3.5)
	}
	("cannon_small")
}
{"cannone_7543"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)
	}
	("cannon_small")
}
{"cannone_8855"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_big")
}
{"cannone_9053"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_big")
}
{"obice_7513"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"81mm_brandt_ita"
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
}
{"obice_10017"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"cannone_10528"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big_ita")
}
{"obice_14912"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	("cannon_big")
}
{"obice_210"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 70)
	}
	("cannon_big")
}
;/*=========== Italian End ===========*/

;/*=========== Japanese Begin ===========*/
{"13mm_type_93"
	("handle_ik")
	{on "init_gun"
		{add_view "flash_gun_hmg_dshk"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{call "update_gun"}
	}
	{on "add_movement_sound"
		{link_sound "rotate_turret" "vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" "vehicle/turret/gun/gun_vertical"}
	}
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	{on "reload" overload
		{call "magazine_delay"}
		{call "crew_reload_ani"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
	(define "magazine_type_93"
		{on "magazine_delay" %override
			{delay %cut
				{tear "piece_small_steel" bone "magazine%no1" copy
					%impulse
				}
				{delay 0
					{view hide "magazine%no1"}
					{delay %show
						{view show "magazine%no1"}
					}
				}
				{tear "piece_small_steel" bone "magazine%no2" copy
					%impulse
				}
				{delay 0
					{view hide "magazine%no2"}
					{delay %show
						{view show "magazine%no2"}
					}
				}
			}
		}
	)
	("magazine_type_93" no1(1) no2(2) cut(0) show(1.8) override() impulse({impulse up -0.01 com}))
}
{"20mm_type_2"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	("cannon_small")
}
{"20mm_type_98"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	("cannon_small")
}
{"40mm_type5_aa"
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}
	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.35) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}
	("cannon_small")
}
{"20mm_type_97"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
}
{"37mm_type_11"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.25 0.2)
	}
	{on "reload_delay" overload
		("reload_time" args 3)
	}
	("cannon_small")
}
{"37mm_type_94"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.25 0.2)
	}
	{on "reload_delay" overload
		("reload_time" args 3)
	}
	("cannon_small")
}
{"47mm_type_1"
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 4.5)
	}
	("cannon_small")
}
{"57mm_type_2"
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 4.5)
	}
	("cannon_small")
}
{"75mm_type_88"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"75mm_type_90"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"75mm_type_4"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}

	("cannon_big")
}
{"88mm_type_99"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}

	("cannon_big")
}
{"81mm_brandt_jap"
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
}
{"70mm_type_92"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"75mm_type_41"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"150mm_type_97"
	{on "add_weapon_sound" overload
		("Mortar_12cm")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
}
{"105mm_type_91"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"105mm_type_92"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"120mm_type_38"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"150mm_type_96"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	("cannon_big")
}
{"200mm_type_4"
	{on "add_weapon_sound" overload
		("Mortar_12cm")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	("cannon_small")
}
{"200mm_type_3"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "add_movement_sound" overload ;// split add movements into separate define and nest this one into it. separate so different turret/gun rotate sounds can be added.
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
	}
	{on fire "gun"
		{delay 1.0
			{bone hide "ammo_attach"}
			{delay 30
				{bone show "ammo_attach"}
			}
		}
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

}
{"240mm_type_45"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "add_movement_sound" overload ;// split add movements into separate define and nest this one into it. separate so different turret/gun rotate sounds can be added.
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}
}
;/*=========== Japanese End ===========*/

;/*=========== Polish Begin ===========*/
{"20mm_fka"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	("cannon_small")
}
{"oerlikon_mk2_pol"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	("cannon_small")
}
{"40mm_bofors"
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}
	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.35) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}
	("cannon_small")
}
{"qf40mm_pol"
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}
	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.35) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}
	("cannon_small")
}
{"37mm_bofors"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.05)
	}
	("cannon_small")
}
{"qf2pdr_pol"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.05)
	}
	("cannon_small")
}
{"qf6pdr_pol"
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}
	("cannon_small")
}
{"qf6pdr_late_pol"
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}
	("cannon_small")
}
{"75mm_wz_02_26"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"75mm_wz97"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6.5)
	}
	("cannon_small")
}
{"75mm_m1_pol"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}
	("cannon_small")
}
{"75mm_aa_wz36"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_big")
}
{"qf17pdr_42_pol"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.40 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)
	}
	("cannon_big")
}
{"qf17pdr_pol"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_HV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.40 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 5.25)
	}
	("cannon_big")
}
{"81mm_brandt_pol"
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
}
{"100mm_wz14"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"105mm_wz1913"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big_fra")
}
{"105mm_wz29"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"120mm_wz1878"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"qf25pdr_pol_early"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_shallow" overload
		("cannon_sandbag" args "sandbag_cannon_shallow" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_small")
}
{"qf25pdr_pol"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_shallow" overload
		("cannon_sandbag" args "sandbag_cannon_shallow" "sandbag")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}
	("cannon_small")
}
{"bl45_pol"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"155mm_wz1917"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	("cannon_big")
}
;/*=========== Polish End ===========*/

{"25mm_pstk34"
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 2.5)
	}
	("cannon_small")
}
{"76mm_f22_usv"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 4)
	}
	("cannon_small")
}
{"76mm_pak36r"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}
	{on "reload_delay" overload
		("reload_time" args 4)
	}
	("cannon_small")
}
{"88mm_raketenwerfer"
	("cannon_small")
}
{"105mm_lfh16"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"105mm_k29"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"128mm_pak44"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
	
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	("cannon_big")
}
{"152mm_d1"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on fire "gun"
		{ani_play "recoil1"}
		{ani_play "recoil2"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.5)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part7" 1)
		{inherited}
	}
	("cannon_big")
}
{"210mm_h17"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 70)
	}
	("cannon_big")
}
{"210mm_morser_16"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 70)
	}
	("cannon_big")
}
{"85mm_52k_armor"
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}

;/*=========== Specific Cannons End ===========*/
