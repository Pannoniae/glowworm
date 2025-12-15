;/*=========== Extra Car Specifics Begin  ===========*/
{"bm8-48"
	("studebaker_sound")
}
{"su12"
	("zis5_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
	}
}
{"studebaker"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}
{"cckw_aa"
	("cckw_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s2")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{ani_play "fire2"}
		{call "spawn_shell_vehicle"}
	}
	{on "spawn_shell_vehicle"
		{start_sound "weapon/shot/shell"}
		{add_view "smoke_zenit" "smoke_shell" "fx_invers"}
		{view start "smoke_shell"}
		{delay 2.5 0.5
			{view stop "smoke_shell"}
		}
		{spawn "shell_cannon" "fx_invers" x scale 0.014
			{impulse up 1.5 0.5 dir -4.5 0.7 cz 0.2 0.1 com}
			{add_view "smoke_zenit" "smoke_shell" "fx_shellsmoke"}
			{view start "smoke_shell"}
			{delay_effect 3 1 "stop"}
			{delay 3 0.5
				{hide 15}
			}
		}
	}
}
{"zis6_61k"
	("zis5_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
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
}
{"cckw_2xt27"
	("studebaker_sound")
}
{"cckw_m33"
	("studebaker_sound")
	{on "add_weapon_sound" overload
		("M2HB_M33_Mount")
	}

	("multi_barrel_loop" flash(flash_gun_big) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(mgun) head(0.115))

}
;/*=========== Extra Car Specifics End  ===========*/
