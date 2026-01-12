;/*=========== Car Specifics Begin  ===========*/

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
		{if not tagged "full_auto_mode"
			{call "burst_stop_1"}
		}
	}
	
	{on "burst_stop_1"
		("burst_stop_custom" mgun(gun) to(1.2) ro(0.5))
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
		{if not tagged "full_auto_mode"
			{call "burst_stop_1"}
		}
	}
	
	{on "burst_stop_1"
		("burst_stop_custom" mgun(mgun) to(1.4) ro(0.4))
	}
}
(include "car-extra.inc")
;/*=========== Car Specifics End  ===========*/
