{"76mm_f22_ger_late"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 4.5)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}
{"88_85mm_flak_m39r"
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
		("reload_time" args 6.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_big")
}
{"122mm_lefh396"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 14)
	}

	("cannon_big")
}
{"15cm_kh4331r"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 23)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_big")
}
{"28cm_wkspr_stan"

	("cannon_small")
	{on fire "gun"
		{play_sound "bkg_rocket"}
		{spawn "nebelwerfer_fire"}
		{volumes "rocket" disable bullet blast}		;// Disables rocket volume after firing while reloading
	}
	{on "cut_parts" overload
		("cut_part" args "stand" 1)
		{inherited}
	}
	{on break				;// volume breaks
		{if not tagged "exploded"
			{if component "rocket"
				{tags add "ammo_broken"}
				{call "stat_break"}
				{call "explosion"}
				{call "explosion_extra"}
			}
		}
	}
	{on "explosion_extra"
		{blastwave c4 9 r0 4 r1 15 offset 0 0 25}
		{blastwave c4 1.3 r0 15 r1 25 offset 0 0 25}
		{spawn "train_die" "basis"}
	}
}

{"80mm_sgrw34_roa"
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
}
{"80mm_sgrw34_stat"
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
}

{"broneschitok"
	{on "check_water_level" overload
		{if not linked
			{if water_level 1.0
				{able "sinking" 1}
				{tags add "no_scavenge"}
			else
				{able "sinking" 0}
			}
		}
	}
}

{"mg_stan wheeled"
	{on "add_movement_sound" overload
		{link_sound "move" "vehicle/cannon_roll/metal_wood"}
	}
}
{"105mm_lefh18_roa"
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
	{on "cut_parts" overload
		("cut_part" args "part1" 0.8)
		("cut_part" args "part2" 0.8)
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}
{"105mm_sk18_roa"
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 23)
	}

	("cannon_big")
}
{"150mm_sfh18_roa"
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}

{"150mm_nebelwerfer41_roa"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	("cannon_small")

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "pa155mm_gpfrt6" 1)
		{inherited}
	}
}
{"maxim_"
	{on "add_weapon_sound"
		("Maxim_Gun")
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/reciprocating/"}
	}
	{on "init_gun"
		{add_view "shell_mgun" "shell" "FXshell"}
		{add_view "ejectsmoke_big" "ejectsmoke" "FXshell"}
	}
	{on fire "mgun1"
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "action_recoil"}
		{view start "flashbarrel"}
		{delay 0.2 "fire"
			{view pause "flashbarrel"}
		}
		{kill_delay "shell_off"}
		{view start "shell"}
		{view start "ejectsmoke"}
		{delay 0.12 "shell_off"
			{view pause "shell"}
			{view pause "ejectsmoke"}
		}
	}
}

{"maxim_stand"
	{on "break_wheel_impulse" overload}		;// Disables broken wheel impulse.

	{on "add_movement_sound" overload
		{link_sound "move" "vehicle/cannon_roll/metal_wood"}
	}
}

{"maxim_x4"
	{on "init_gun" overload
		{add_view "shell_mgun" "shell1" "fxshell1"}
		{add_view "shell_mgun" "shell2" "fxshell2"}
		{add_view "shell_mgun" "shell3" "fxshell3"}
		{add_view "shell_mgun" "shell4" "fxshell4"}
		{add_view "ejectsmoke_big" "ejectsmoke1" "FXshell1"}
		{add_view "ejectsmoke_big" "ejectsmoke2" "FXshell2"}
		{add_view "ejectsmoke_big" "ejectsmoke3" "FXshell3"}
		{add_view "ejectsmoke_big" "ejectsmoke4" "FXshell4"}
		{add_view "flash_gun_big" "flashbarrel00" "shooter00"}
		{add_view "flash_gun_big" "flashbarrel01" "shooter01"}
		{add_view "flash_gun_big" "flashbarrel02" "shooter02"}
		{add_view "flash_gun_big" "flashbarrel03" "shooter03"}
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
		else ("fire_barrel" args 02 3)
		else ("fire_barrel" args 03 4)
		}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
}
{"ds39_stand"
	{on "add_weapon_sound" overload
		("DS39")
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
	}
}
{"sg43_stand"
	{on "add_weapon_sound" overload
		("SG43")
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
	}
}

{"dshk_aa"
	{on "init_gun" overload
		("DShK38")
		{add_view "shell_hmgun" "shell" "fxshell"}
		{add_view "ejectsmoke_big" "ejectsmoke" "FXshell"}
	}

	{on fire "mgun1"
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "action_recoil_HMG"}
		{view start "shell"}
		{view start "ejectsmoke"}
		{delay 0.12
			{view pause "shell"}
			{view pause "ejectsmoke"}
		}
	}
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_straight_heap" "sandbag")
	}
}

{"dshk_stan"
	{on "init_gun" overload
		("DShK38")
		{add_view "shell_hmgun" "shell" "fxshell"}
		{add_view "ejectsmoke_big" "ejectsmoke" "FXshell"}
	}

	{on fire "mgun1"
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "action_recoil_HMG"}
		{view start "shell"}
		{view start "ejectsmoke"}
		{delay 0.12
			{view pause "shell"}
			{view pause "ejectsmoke"}
		}
	}
}

{"25mm_72k"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.23) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_small")
}

{"37mm_61k"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.35) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_small")
}

{"37mm_m30"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.05)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"45mm_m37"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"45mm_m42"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}
{"75mm_pak50"
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 5.25)
	}

	{on "cut_parts" overload
		("cut_part" args "standl" 1)
		("cut_part" args "standr" 1)
		("cut_part" args "shield_lower2" 1)
		{inherited}
	}

	("cannon_small")
}

{"57mm_zis2"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}

	("cannon_small")
}

{"57mm_zis2_late"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}

	("cannon_small")
}

{"76mm_bpk76"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 6.5)
	}

	("cannon_small")
}

{"76mm_m1902"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		{inherited}
	}

	("cannon_small")
}

{"76mm_m1927"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.5)
	}

	("cannon_small")
}

{"76mm_m43"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	("cannon_small")
}

{"76mm_m1933"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 8.5)
	}

	("cannon_small")
}

{"76mm_m1938"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 5.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_big")
}

{"76mm_f22"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 4.5)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"76mm_zis3"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_small")
}

{"85mm_52k"
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
		{inherited}
	}

	("cannon_big")
}

{"100mm_bs3"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.15)
	}

	{on "reload_delay" overload
		("reload_time" args 6.1)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_big")
}

{"107mm_m1910_30"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 14)
	}

	("cannon_big")
}

{"122mm_m1910"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 14)
	}

	("cannon_big")
}

{"122mm_m30"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 14)
	}

	("cannon_big")
}
{"122mm_a19"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 18)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_big")
}

{"152mm_ml20"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 23)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_big")
}

{"d1"

}

{"152mm_br2"
	{on "spawn_shell_delay" overload}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 12)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}

	("cannon_big")
}

{"203mm_b4"
	{on "spawn_shell_delay" overload}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 12)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}

	("cannon_big")
}

{"280mm_br5"
	{on "spawn_shell_delay" overload}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 12)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}

	("cannon_big")
}

{"raketenwerfer"
	;{on "construction_sandbag_cannon_standard" overload
	;	("cannon_sandbag" args "sandbag_curved_heap" "sandbag")
	;}
}

{"300mm_m30"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_curved_heap" "sandbag")
	}
}

{"300mm_m31"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_curved_heap" "sandbag")
	}
}

{"305mm_mb_2_12"
	{on spawn
		{add_view "tank_canon_fire_170_210"				"flashbarrel00"	"foresight1"}
		{add_view "tank_canon_fire_170_210"				"flashbarrel01"	"foresight2"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_huge" "weapon/shot/bkg/cannon/huge/"}
	}
	{on fire "gun1" overload
		{view start "flashbarrel00"}
		{blastwave c4 0.2 r0 1 r1 2.5 bone "flashbarrel00"}
		{ani_play "fire00"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_huge"}
		{call "maximum_terrain_fx"}
	}
	{on fire "gun2" overload
		{view start "flashbarrel01"}
		{blastwave c4 0.2 r0 1 r1 2.5 bone "flashbarrel01"}
		{ani_play "fire01"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_huge"}
		{call "maximum_terrain_fx"}
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		("cut_part" args "part7" 1)
		{spawn "vehicle_die" "basis"}
		{spawn "train_die" "basis"}
		{inherited}
	}
	
	{on break
		{if not tagged "exploded"
			{if component "gun1"
				{call "update_gun"}
				{tags add "gun1_brake"}
				{talk "broken_gun"}
			else component "gun2"
				{call "update_gun"}
				{tags add "gun2_brake"}
				{talk "broken_gun"}
			}
		}
	}
	{on repair
		{if component "gun1"
			{call "update_gun"}
			{tags remove "gun1_brake"}
		else component "gun2"
			{call "update_gun"}
			{tags remove "gun2_brake"}
		}
	}
	{on "update_gun"
		{if work "gun"
			{weapon_work "gun" 1}
		else
			{weapon_work "gun" 0}
		}
		{if work "gun1"
			{weapon_work "gun1" 1}
		else
			{weapon_work "gun1" 0}
		}
		{if work "gun2"
			{weapon_work "gun2" 1}
		else
			{weapon_work "gun2" 0}
		}
	}
}

{"ap2"
	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_big")
}

;/*=========== Soviets End ===========*/

;/*=========== Germans Begin ===========*/

{"mgun_ring"
	{on blast_hit overload}
	{on "gunner_hatch_open"
		{ani_play "mgun_aa" +1.0 resume}
	}
}

{"panzernest_krab"
	{on animation_event "close" overload		;// event called on frame 1 of "close" animation
		{if tagged "transition"
			{tags remove "transition"}
		else
			{tags add "transition"}
		}
		{call "body_check"}
	}

	{on animation_event "open"		;// event called on last frame of "close" animation
		{if tagged "transition"
			{tags remove "transition"}
		else
			{tags add "transition"}
		}
		{call "body_check"}
		
		{if cannon_state "fire"
			{call "hide_wheels"}
		else
			{call "show_wheels"}
		}
	}

	{on "body_check"				;// ables for all wheel volumes
		{if tagged "transition"
			{volumes "anim_no_contact" disable contact}
		else
			{volumes "anim_no_contact" enable contact}
		}
	}
	
	{on "cut_parts" overload
		("cut_part" args "wheelL" 1)
		("cut_part" args "wheelR" 1)
		{inherited}
	}
}

{"flak38"
	("cannon_small")
}

{"20mm_flak30_roa"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	("magazine" cut(0.4) show(1.8) override(overload) impulse({impulse up 0.3 forward 0.9 0.1}))

	("cannon_small")
}

{"210mm_nebelwerfer42_roa"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	("cannon_small")

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		{inherited}
	}
}
{"300mm_nebelwerfer42_kos"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	("cannon_small")
}

{"20mm_flak38"
	("magazine" cut(0.4) show(1.8) override(overload) impulse({impulse up 0.3 forward 0.9 0.1}))

	("cannon_small")
}

{"multi_sight"
	{on spawn
		("rand_cut_else" args "aim_sight1" "aim_sight2")
		("rand_cut_else" args "seat_1" "seat_2")
	}
}

{"37mm_flak37"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		("cut_part" args "part7" 1)
		{inherited}
	}

	("cannon_small")
}

{"28mm_pzb41"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 2.5)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_small")
}

{"37mm_pak36"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.05)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}
{"37mm_pak36_late_roa"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.05)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}
{"50mm_pak38_roa"
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 3.75)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part7" 1)
		{inherited}
	}

	("cannon_small")
}
{"37mm_pak36_roa"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.05)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"47mm_pakt"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 4.5)
	}

	("cannon_small")
}

{"50mm_flak41"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.32) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "standr" 1)
		("cut_part" args "standl" 1)
		("cut_part" args "trailer_front" 1)
		("cut_part" args "trailer_rear" 1)
		{inherited}
	}

	("cannon_big")
}

{"50mm_pak38"
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

	("cannon_small")
}

{"75mm_lg40"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.0 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.5)
	}

	("cannon_small")
}

{"75mm_leig18"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}

	("cannon_small")
}

{"75mm_legebig18"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}

	("cannon_small")
}

{"75mm_legebig18_snow"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "wheelL" 1)
		{inherited}
	}

	("cannon_skis")
}


{"75mm_pak9738"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 3.5)
	}

	("cannon_small")
}
{"75mm_pak9738_kos_late"
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
{"75mm_pak40"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 5.25)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"88mm_flak18"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}

	("cannon_big")
	
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part8" 1)
		{inherited}
	}
}

{"88mm_flak36"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}

	("cannon_big")

	{on "cut_parts" overload
		("cut_part" args "part4" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}
}

{"88mm_pak4341"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.1 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 7.5)
	}

	("cannon_big")
}

{"105mm_lefh18"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 0.8)
		("cut_part" args "part2" 0.8)
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}

{"105mm_lefh18m"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 10)
	}
	{on "cut_parts" overload
		("cut_part" args "wheelr" 0.8)
		("cut_part" args "wheell" 0.8)
		("cut_part" args "standl" 1)
		("cut_part" args "standr" 1)
		("cut_part" args "part1" 1)
		{inherited}
	}

	("cannon_big")
}

{"105mm_sk18"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 23)
	}

	("cannon_big")
}

{"150mm_sig33"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}

	{on "cut_parts" overload
		("cut_part" args "wheelr" 1)
		{inherited}
	}

	("cannon_big")
}

{"150mm_sfh18"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}

{"150mm_nebelwerfer41"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	("cannon_small")

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}
}

{"155mm_gpf_platform"
	{on blast_hit overload}
}

{"170mm_k18"
	{on "spawn_shell_delay" overload}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 68)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part8" 1)
		{inherited}
	}

	("cannon_big")
}

{"210mm_nebelwerfer42"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	("cannon_small")

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		{inherited}
	}
}

{"210mm_morser18"
	{on "spawn_shell_delay" overload}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 68)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part8" 1)
		{inherited}
	}

	("cannon_big")
}

{"600mm_thor"
	{on spawn
		{volumes "shell2" disable bullet blast}
	}
	{on "spawn_shell_delay" overload}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}

	{on "reload" overload
		{call "reload_delay"}
		{if tagged "gun_fired"
			{delay 12
				{tags remove "gun_fired"}
				{talk "reloaded"}
			}
		else ;//switching ammo
			{delay 4
				{ani_play "shell_eject" 1.0}
			}
			{delay 12
				{talk "reloaded"}
			}
		}
		{delay 1
			{talk "reload"}
		}
	}

	{on "reload_delay" overload}

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/karl_gerat/MB507C/start"}
		{link_sound "engine_stop"		"vehicle/engine/karl_gerat/MB507C/stop"}
		{link_sound "engine_idle"		"vehicle/engine/karl_gerat/MB507C/idle"}
		{link_sound "engine_full"		"vehicle/engine/karl_gerat/MB507C/full"}
		{link_sound "exhaust"			"vehicle/engine/karl_gerat/MB507C/exhaust"}
		{link_sound "move"				"vehicle/tracks/karl_gerat/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}

	{on ik begin "basis"			;// gun bone rotates (vertical rotation)
		{if cannon_state "fire"
			{play_sound "rotate_gun" 1}
			{ani_play "aim_v" loop resume}
			{ani_play "aim_h" loop resume}
		}
	}

	{on ik end "basis"				;// gun stops rotation
		{stop_sound "rotate_gun"}
		{ani_stop "aim_v"}
		{ani_stop "aim_h"}
	}

	{on fire "gun"
		{volumes "shell1" disable bullet blast}		;// Disables shell volume after firing while reloading
		{delay 12									;// Ables shell volume after firing while reloading
			{volumes "shell2" enable bullet blast}
		}
		{delay 22									;// Delay set to match reload time of main weapon
			{volumes "shell1" enable bullet blast}	;// Aables shell volume after reloading
			{volumes "shell2" disable bullet blast}	;// Disables shell volume after reloading
		}
	}

	{on break_armor					;// volume breaks
		{if not tagged "exploded"
			{if volume "shell1"
				{call "stat_break"}
				{call "_explosion"}
			else volume "shell2"
				{call "stat_break"}
				{call "_explosion"}
			}
		}
	}

	{on "explosion_blastwave" overload
		{blastwave c4 15 r0 7 r1 14 offset 0 0 75}
		{blastwave c4 2 r0 10 r1 20 offset 0 0 75}
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{spawn "tank_die_heavy" "basis"}
		{start_sound "detonation/explosion_vehicle/bkg/"}
		{if terrain_fx "snow"
			{spawn "tank_die_snow" "basis"}
		else terrain_fx "ice"
			{spawn "tank_die_snow" "basis"}
		else
			{spawn "tank_die_dust" "basis"}
		}
	}

	{on contact overload
		{if not impregnable
			{if not effector "bicycle"
				{if effector "vehicle"
					{if effector_velocity 2
						{if not "fx_delay"
							{set "fx_delay" 1}
							{delay 2 "fx_delay"
								{set "fx_delay" 0}
							}
							{spawn "metal_crush" "root"}
						}
					}
				}
			}
		}
	}
}

{"300mm_nebelwerfer42"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	("cannon_small")
}
{"200mm_leldgw"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	("cannon_small")
}

;/*=========== Germans End ===========*/

;/*=========== Finnish Begin ===========*/

{"20mm_l39"
	("magazine" cut(0.6) show(2.7) override(overload) impulse({impulse up 0.3 forward 1.9 0.2}))
}


{"20mm_itk35"
	("magazine" cut(0.4) show(1.8) override(overload) impulse({impulse up 0.3 0.2 forward 1.9 0.2}))

	{on "cut_parts" overload
		("cut_part" args "wheell" 1)
		("cut_part" args "wheelr" 1)
		{inherited}
	}

	("cannon_small")
}

{"20mm_itk40"
	{on "init_gun"
		{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}
	("cannon_small")
}

{"37mm_pstk36"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.20 0.35)
	}

	{on "reload_delay" overload
		("reload_time" args 3.5)
	}


	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_small")
}

{"47mm_pstk39"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 3.5)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_small")
}

{"40mm_itk38b"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.45) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part8" 1)
		{inherited}
	}

	("cannon_small")
}

{"45mm_pstk32"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"75mm_pstk9738"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 3.5)
	}

	("cannon_small")
}

{"75mm_k44"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.55 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 4)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"75mm_itk37"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 5.0)
	}

	("cannon_big")

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "wheell1" 1)
		("cut_part" args "wheelr1" 1)
		("cut_part" args "wheell2" 1)
		("cut_part" args "wheelr2" 1)
		{inherited}
	}
}

{"76mm_m1927_fin"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.5)
	}

	("cannon_small")
}

{"76mm_k02_30_40"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"84mm_k18"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.5)
	}	
	{on "cut_parts" overload
		("cut_part" args "wheelL" 1)
		("cut_part" args "wheelR" 1)
		{inherited}
	}
	("cannon_big")
}

{"105mm_k13"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 10)
	}

	("cannon_big")
}

{"105mm_k34"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 10)
	}

	("cannon_big")
}

{"107mm_k10"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 10)
	}

	("cannon_big")
}

{"120mm_k78_31"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 14)
	}

	("cannon_big")
}

{"122mm_m1910_fin"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 14)
	}

	("cannon_big")
}

{"155mm_h17"
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		{inherited}
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 30)
	}

	("cannon_big")
}

{"170mm_minewerfer"
	{on "self_destruct" overload
		{spawn "car_die" "basis"}
	}
}

{"203mm_h17"
	{on "spawn_shell_delay" overload}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 88)
	}

	("cannon_big")
}

;/*=========== Finnish End ===========*/

;/*=========== USA Begin ===========*/


{"m1917_30cal"
	{on "add_weapon_sound"
		("M1919A4")
	}
	{on "init_gun"
		{add_view "shell_mgun" "shell" "FXshell"}
		{add_view "ejectsmoke_big" "ejectsmoke" "FXshell"}
	}
	{on fire "mgun"
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "action_recoil"}
		{view start "flashbarrel"}
		{delay 0.2 "fire"
			{view pause "flashbarrel"}
		}
		{kill_delay "shell_off"}
		{view start "shell"}
		{view start "ejectsmoke"}
		{delay 0.12 "shell_off"
			{view pause "shell"}
			{view pause "ejectsmoke"}
		}
	}
}
{"m2_30cal_tripod"
	{on "add_weapon_sound"
		("M1919A4")
	}
}
{"m2_50cal_tripod"
	{on "add_weapon_sound"
		("M2HB")
	}
}

{"50cal_quad_m45"				;// base code for multi-barrel cannons and vehicles. To customize, add unique code to specific cannon name prop
	("handle_ik")
	{on "add_weapon_sound" overload
		("M2HB_M45_Mount")
	}

	("multi_barrel_loop" flash(flash_gun_big) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(mgun) head(0.070))

	{on "reload"
		{ani_play "reload_mgun" 1.0}
	}
	{on "reload_delay" overload
		("reload_time" args 30)		;// weapon reload time
	}

	("cannon_small")
}

{"37mm_m3"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.25 0.2)
	}

	{on "reload_delay" overload
		("reload_time" args 3)
	}

	("cannon_small")
}

{"40mm_m1"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.45) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part8" 1)
		{inherited}
	}

	("cannon_small")
}

{"50mm_rocket_projector"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "cut_parts" overload			;// Forces Mortars to cut all parts instead of using random chance.
		("cut_part" args "part1" 1)		;// Looks odd when legs cut but barrel floats in air.
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}
}

{"57mm_m1"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.75 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 4.5)
	}

	("cannon_small")
}

{"75mm_m1897"
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


{"75mm_m1a1"
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

{"75mm_m3a3"
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

{"76mm_m5_m1"
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

{"76mm_m5_m6"
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

{"90mm_m1a1"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}

	("cannon_big")
	
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "standf" 1)
		;("cut_part" args "pivot_front" 1)
		{inherited}
	}
}

{"105mm_m2a1"
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

{"105mm_m3"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}

	("cannon_big")
}

{"107mm_m2"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}
}

{"114mm_m1"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 20)
	}

	("cannon_big")
}

{"155mm_gpf"
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}

	("cannon_big")
}

{"155mm_m1"
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

{"155mm_m1a1_longtom"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}

	{on "cut_parts" overload
		("cut_part" args "gun" 0.6)
		("cut_part" args "gun_rot" 0.6)
		("cut_part" args "turret_mesh" 0.6)
		{inherited}
	}

	("cannon_big")
}

{"155mm_schneider_us"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 30)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		{inherited}
	}

	("cannon_big")
}

{"203mm_m1"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 70)
	}

	{on "cut_parts" overload
		("cut_part" args "gun" 0.6)
		("cut_part" args "gun_rot" 0.6)
		("cut_part" args "turret_mesh" 0.6)
		{inherited}
	}

	("cannon_big")
}

;/*=========== ROA ===========*/

{"37mm_flak39r"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.35) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_small")
}

{"37mm_pakt36p"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.20 0.35)
	}

	{on "reload_delay" overload
		("reload_time" args 3.5)
	}


	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_small")
}

{"75mm_pak40_roa"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 5.25)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"76mm_fk58j"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		{inherited}
	}

	("cannon_small")
}

{"76mm_fk2951r"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		{inherited}
	}

	("cannon_small")
}

{"76mm_gebk_293r"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.5)
	}

	("cannon_small")
}

{"100mm_skoda_m1934"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
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
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}

{"105mm_k331f"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 10)
	}

	("cannon_big")
}

{"20mm_breda_2065"
	("magazine" cut(0.4) show(1.8) override(overload) impulse({impulse up 0.3 0.2 forward 1.9 0.2}))

	{on "cut_parts" overload
		("cut_part" args "wheell" 1)
		("cut_part" args "wheelr" 1)
		{inherited}
	}

	("cannon_small")
}

{"28mm_pzb41_roa"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 2.5)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_small")
}

{"75mm_1897_mod38"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 3.5)
	}

	("cannon_small")
}

{"76mm_pak36r"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 4.5)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"76mm_pak36r_late"
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

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"120mm_wz1878_09_31"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 14)
	}

	("cannon_big")
}

{"obice_210_roa"
	{on "spawn_shell_delay" overload}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 68)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part8" 1)
		{inherited}
	}

	("cannon_big")
}

{"75mm_gebk15"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.5)
	}

	("cannon_small")
}

{"gebh40"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 0.8)
		("cut_part" args "part2" 0.8)
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}

{"9cm_flak41i"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}

	("cannon_big")
	
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part8" 1)
		{inherited}
	}
}

{"obice_210_ger"
	{on "spawn_shell_delay" overload}

	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}

	{on "reload_delay" overload
		("reload_time" args 68)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part8" 1)
		{inherited}
	}

	("cannon_big")
}

{"75mm_pak41"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 5.25)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"75mm_gebg36"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.5)
	}

	("cannon_small")
}

{"45mm_m42_roa"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}
{"76mm_m1927_roa"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.5)
	}

	("cannon_small")
}
{"150mm_sig33_roa"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}

	{on "cut_parts" overload
		("cut_part" args "wheelr" 1)
		{inherited}
	}

	("cannon_big")
}
{"88mm_pak4341_roa"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.1 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 7.5)
	}

	("cannon_big")
}
{"100mm_vz14_skoda_grc"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 0.8)
		("cut_part" args "part2" 0.8)
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}
{"100mm_nbw35_roa"
	{on "add_weapon_sound" overload
		("Mortar_12cm")
	}
}
{"105mm_wz29_stand"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 15)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 0.8)
		("cut_part" args "part2" 0.8)
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}
{"88mm_flak36_roa"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}

	("cannon_big")

	{on "cut_parts" overload
		("cut_part" args "part4" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}
}
{"88mm_flak36_roa_stat"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_time" args 6)
	}

	("cannon_big")

	{on "cut_parts" overload
		("cut_part" args "part4" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}
}
{"75mm_pak40_stat"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_time" args 5.25)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}
{"155mm_gpf_kos"
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_time" args 30)
	}

	("cannon_big")
}
{"300mm_nebelwerfer42_kos"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_cannon_standard" "sandbag")
	}

	("cannon_small")
}


;/*=========== Specific Cannons End ===========*/
