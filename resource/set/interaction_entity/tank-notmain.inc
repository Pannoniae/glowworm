{"tank"
	{on fire "gun_sub_indirect"
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{ani_play "fire"}
	}
}

{"tank shell_eject"
	{on fire "gun_sub_indirect"
		{call "spawn_shell"}
	}
}
