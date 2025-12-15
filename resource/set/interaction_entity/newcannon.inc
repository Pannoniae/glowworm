
{"cannon"							;// master / base code for all cannons
	{on fire "gun_sub_indirect"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}

	{on "reload"
		{call "reload_delay"}
		(define "reload_delay"
			{if tagged "gun_fired"
				{delay %0 ;4.5
					{tags remove "gun_fired"}
					{ani_play "shell_eject" -1.0}
					{talk "reloaded"}
				}
			else ;//switching ammo
				{delay %1 ;0.5
					{ani_play "shell_eject" 1.0}
				}
				{delay %2 ;5
					{ani_play "shell_eject" -1.0}
					{talk "reloaded"}
				}
			}
		)
		{delay 1
			{talk "reload"}
		}
	}

	{on "reload_delay"
		("reload_delay" args 4.5 0.5 5)
	}
}