;/*=========== ROA  ===========*/
{"renault_agr_ger"
	("cckw_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

{"sdkfz10_roa"
	("hanomag_sound")
}
{"sdkfz10_armor"
	("hanomag_sound")
}
{"sdkfz10_armor_rocket"
	("hanomag_sound")
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
{"sdkfz10_armor_rocket_ger"
	("hanomag_sound")
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

{"opel_maultier_inf"
	("opel_maultier_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}
{"blitz3_6_kos"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}
{"blitz3_6_raketenwerfer"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	("rocket_weapon" args gun)		;// defines weapon place that is disabled while vehicle is on move

	{on fire "rocket"
		{volumes "rocket" disable bullet blast contact}		;// Disables rocket volume after firing while reloading
	}
	{on "reload"
		{if name "rocket"
			{delay 320										;// Delay set to match reload time of main weapon
				{volumes "rocket" enable bullet blast}
			}
		}
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
{"blitz3_6_raketenwerfer_ger"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	("rocket_weapon" args gun)		;// defines weapon place that is disabled while vehicle is on move

	{on fire "rocket"
		{volumes "rocket" disable bullet blast contact}		;// Disables rocket volume after firing while reloading
	}
	{on "reload"
		{if name "rocket"
			{delay 320										;// Delay set to match reload time of main weapon
				{volumes "rocket" enable bullet blast}
			}
		}
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
{"blitz3_6_kos_ammo"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"praga_rv_inf"
	("opel_sound")
	("animation_sound" args "doorleft")
	("animation_sound" args "doorright")
}

{"blitz3_6_flak30_roa"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")

	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}
}
{"blitz3_6_fuel_roa"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"blitz3_6_engineering_roa"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"praga_rv_ammo"
	("opel_sound")
	("animation_sound" args "doorleft")
	("animation_sound" args "doorright")
}
{"kubelwagen_roa car"
	("kubel_sound")
}
{"kfz15_kos car"
	("kubel_sound")
}
{"bmw_r71_roa"
	("r12_sound")
}
{"bmw_r71_kos"
	("r12_sound")
}
{"gaz_aaa_supply_ger"
	("zis5_sound")
}
{"gaz_aaa_ger"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}
{"gaz_aaa_drilling"
	("zis5_sound")
	{on "add_weapon_sound" overload
		("MG151_15_Drilling")
	}
	("multi_barrel_loop" flash(flash_gun_hmg_m2hb) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(gun) head(0.081))

	{on "zenite_terrain_fx" overload} ; // overwrites and stops dust fx on ground from firing main gun
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"steir_drilling"
	("kfz13_sound")
	{on "add_weapon_sound" overload
		("MG151_15_Drilling")
	}
	("multi_barrel_loop" flash(flash_gun_hmg_m2hb) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(gun) head(0.081))

	{on "zenite_terrain_fx" overload} ; // overwrites and stops dust fx on ground from firing main gun
}

{"gaz_aaa_su12"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on fire "gun"
		{ani_play "recoil"}
	}
}

{"gaz_4_2m"
	("zis5_sound")
	{on "init_gun" overload
		{add_view "shell_mgun" "shell1" "fxshell1"}
		{add_view "shell_mgun" "shell2" "fxshell2"}
		{add_view "ejectsmoke_big" "ejectsmoke1" "FXshell1"}
		{add_view "ejectsmoke_big" "ejectsmoke2" "FXshell2"}
		{add_view "flash_gun_big" "flashbarrel00" "shooter00"}
		{add_view "flash_gun_big" "flashbarrel01" "shooter01"}
	}
	{on "add_weapon_sound" overload
		("Maxim_Gun")
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"bmw_r71_roa"
	("r12_sound")
}
{"kubelwagen_mg_roa car"
	("kubel_sound")
}
{"su_1_12"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
	{on fire "gun"
		{ani_play "recoil"}
	}

}
{"kubelwagen_roa car"
	("kubel_sound")
}
{"zis5_ger car"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}
;/*=========== Car Specifics End  ===========*/
