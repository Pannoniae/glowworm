;/*=========== Car Specifics Begin  ===========*/
(define "french_car"
	{on spawn
		{link_sound "flame" "fire/metal"}

		{add_view	"dustrun_car"			"on_grass"			"FXtraceR1"}
		{add_view	"dustrun_car"			"on_grass"			"FXtraceL1"}
		{add_view	"dustrun_sand_car"		"on_sand"			"FXtraceR1"}
		{add_view	"dustrun_sand_car"		"on_sand"			"FXtraceL1"}
		{add_view	"dustrun_snow_car"		"on_snow"			"FXtraceR1"}
		{add_view	"dustrun_snow_car"		"on_snow"			"FXtraceL1"}
		{add_view	"dustrun_car"			"on_country_road"	"FXtraceR1"}
		{add_view	"dustrun_car"			"on_country_road"	"FXtraceL1"}
		{add_view	"dustrun_car"			"on_ground"			"FXtraceR1"}
		{add_view	"dustrun_car"			"on_ground"			"FXtraceL1"}

		{add_view	"drops_water"			"on_water"			"FXtraceR1"}
		{add_view	"drops_water"			"on_water"			"FXtraceL1"}
		{add_view	"drops_water_moto"		"on_puddle"			"FXtraceR1"}
		{add_view	"drops_water_moto"		"on_puddle"			"FXtraceL1"}

		{add_view	"smoke_broken_engine"	"smoke1"			"FXfire1"}
		{add_view	"steam"					"steam"				"FXsteam"}
		{add_view	"exhaust_dark_small"	"exhaust"			"FXsmoke1"}
		{add_view	"exhaust_dark_small2"	"exhaust2"			"FXsmoke1"}
		{add_view	"smoke_fire_fuel"		"fire_fuel"			"fuel"}
		{add_view	"smoke_fire_fuel"		"fire_fuel1"		"fuel"}
		{add_view	"smoke_fire_fuel"		"fire_fuel2"		"fuel"}

		{link_sound "wheel_ground"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}

		{link_sound "truck_open"		"vehicle/doors/truck/open"}
		{link_sound "truck_close"		"vehicle/doors/truck/close"}
		{link_sound "tailgate_open"		"vehicle/doors/tailgate/open"}
		{link_sound "tailgate_close"	"vehicle/doors/tailgate/close"}
		{link_sound "car_open"			"vehicle/doors/car/open"}
		{link_sound "car_close"			"vehicle/doors/car/close"}
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

(define "shell_ejection"
	{on fire "gun"
		{ani_play "fire"}
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
)
{"citroen_23r"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"citroen_23r_art"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"citroen_23r_eng"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"citroen_23r_inf"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"renault_agk"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"renault_fuel"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"renault_aa"
	("french_car")
	("cckw_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
	{on "init_gun"
		{add_view "flash_gun_hmg_dshk"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{call "update_gun"}
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
{"laffly_v15t"
	("kubel_sound")
}
{"laffly_v15t_mg"
	("kubel_sound")
	{on "add_weapon_sound" overload
		("Hotchkiss_MG")
	}
}
{"laffly_v15t_hmg"
	("kubel_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
}
{"citroen_c11"
	("gaz_sound")
}
{"laffly15tcc"
	("kubel_sound")
	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
}
{"type94"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"type94inf"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"type94art"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"type94eng"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"type94_fuel"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"type94aa"
	("opel_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
}
{"type95"
	("kubel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"type95_com"
	("kubel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"pf508"
	("kubel_sound")
}
{"pf621"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"pf621_art"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"pf621_eng"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"pf621_inf"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"pf621_fuel"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"pf621_aa"
	("zis5_sound")
	{on "add_weapon_sound" overload
		("Maxim_Gun")
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"praga_rv"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"pf621_75mm"
	("zis5_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
}
{"bedford_ql"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"bedford_ql_art"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"bedford_ql_eng"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"bedford_ql_inf"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_cckw352"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_cckw352_art"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_cckw353"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_cckw353_inf"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_cckw353_eng"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_cckw353_fuel"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_cckw353_2xt27 car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"chevrolet_fr"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"chevrolet_fuel_fr"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"chevrolet_fuel_pol"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"chevrolet_pol"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_willysmb"
	("gaz_sound")
	{on "add_weapon_sound" overload
		("M1919A4")
	}
	{on spawn	
		{if not tagged "window_set"
			{tags add "window_set"}
			{delay 0.1
				{ani_play "open2"}
			}
		}
	}
}
{"np_willys50"
	("gaz_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
}
{"np_willysat"
	("gaz_sound")
}
{"np_willys_com"
	("gaz_sound")
}
{"np_dodge"
	("opel_sound")
}
{"dodge_pol"
	("opel_sound")
}
{"np_dodge_armor"
	("opel_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
}
{"np_dodgewc55"
	("opel_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on spawn	
		{if not tagged "window_set"
			{tags add "window_set"}
			{delay 0.1
				{ani_play "open2"}
			}
		}
	}
}
{"np_willys"
	("gaz_sound")
	{on "add_weapon_sound" overload
		("M1919A4")
	}
	{on spawn	
		{if not tagged "window_set"
			{tags add "window_set"}
			{delay 0.1
				{ani_play "open2"}
			}
		}
	}
}
{"cckw352_fr_art"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"cckw352_fr_eng"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"cckw352_fr_eng"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"dodgewc55_fr"
	("opel_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Cannon_Breech")
	}
	{on spawn	
		{if not tagged "window_set"
			{tags add "window_set"}
			{delay 0.1
				{ani_play "open2"}
			}
		}
	}
}
{"np_matador_art"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_matador_eng"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_matador"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_matador_fuel"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"np_morris_cs8"
	("opel_sound")
}
{"np_willys_2xmg"
	("gaz_sound")
	{on "add_weapon_sound" overload
		("M1919A4")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun" overload
		{play_sound "bkg_mg"}
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
}
{"lancia"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"fiat626"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"fiat626_art"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"fiat626_eng"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"fiat626_fuel"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"fiat626_inf"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"autocanon_75mm"
	("zis5_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Cannon_Breech")
	}
	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
}
{"as42"
	("opel_sound")
	{on "add_weapon_sound" overload
		("Breda38_MG")
	}
}
{"as42_2065"
	("opel_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
}
{"krupp_mg"
	("opel_sound")
}
{"mercedesl3000"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"mercedesl3000_art"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"mercedesl3000_eng"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"mercedesl3000_fuel"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"botond"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"botond2"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"3ro"
	{on spawn
		{set "rotate_turret_3ro" 0}
		{set "chassis_work_turret" 1}
		{set "chassis_work" 1}
	}
	("studebaker_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on ik begin "turret"
		{kill_delay "rotate_turret"}
		{if not "rotate_turret_3ro"
			{set "rotate_turret_3ro" 1}
			{If "chassis_work"
				{set "chassis_work" 0}
				{ani_play "close"}
				{play_sound "rotate_turret" 1}
				{set  "chassis_work_turret" 1}
			else
				{set  "chassis_work_turret" 0}
				
			}	
		}
	}
	{on ik end "turret"
		{if "rotate_turret_3ro"
			{set "chassis_work" 1}
		}
		{delay 0.5 "rotate_turret"
			{stop_sound "rotate_turret"}
			
		}
	}
	{on move on overload
		{if "rotate_turret_3ro"
			{set "rotate_turret_3ro" 0}
			{if work "turret"
				{ik_enable "turret" 0}
				{ani_play "close" -1}
				
			}
		}
	}
	{on move off overload
		{If not "rotate_turret_3ro"
			{if work "turret"
				{ik_enable "turret" 1}
				{set "chassis_work_turret" 1}
			}
		}
	}
	("shell_ejection")
}
{"np_chevrolet30cwt"
	("opel_sound")
	{on "add_weapon_sound" overload
		("Vickers_MG")
	}
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}
{"np_chevrolet_aa"
	("studebaker_sound")
	{on "add_weapon_sound" overload
		("Maxim_Gun")
	}
	{on spawn
		{link_sound "bkg_hmg" "weapon/shot/bkg/gun/hmg/"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	{on fire "mgun" overload
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
		{play_sound "bkg_hmg"}
		{ani_play "recoil"}
		{call "spawn_shell"}
	}
}
{"hansa_lloyd"
	("hanomag_sound")
}
{"cmp_tri-polsten"
	("opel_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	{on spawn
		{link_sound "bkg_hmg" "weapon/shot/bkg/gun/hmg/"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel01"	"shooter01"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel02"	"shooter02"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
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
		else ("fire_barrel" args 02)
		}
		{play_sound "bkg_hmg"}
		{ani_play "recoil"}
		{call "spawn_shell"}
	}
}
{"willys_2xmg"
	("gaz_sound")
	{on "add_weapon_sound" overload
		("M1919A4")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun" overload
		{play_sound "bkg_mg"}
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
}
(include "car-extra.inc")
;/*=========== Car Specifics End  ===========*/
