
;/*=========== Japan Vehicles Begin ===========*/

(define "chi-ha_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/chi-ha/start"}
		{link_sound "engine_stop"		"vehicle/engine/chi-ha/stop"}
		{link_sound "engine_idle"		"vehicle/engine/chi-ha/idle"}
		{link_sound "engine_full"		"vehicle/engine/chi-ha/full"}
		{link_sound "exhaust"			"vehicle/engine/chi-ha/exhaust"}
		{link_sound "move"				"vehicle/tracks/chi-ha"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)
(define "ha-go_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/ha-go/start"}
		{link_sound "engine_stop"		"vehicle/engine/ha-go/stop"}
		{link_sound "engine_idle"		"vehicle/engine/ha-go/idle"}
		{link_sound "engine_full"		"vehicle/engine/ha-go/full"}
		{link_sound "exhaust"			"vehicle/engine/ha-go/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz1/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "chi-he_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/chi-ha/start"}
		{link_sound "engine_stop"		"vehicle/engine/chi-ha/stop"}
		{link_sound "engine_idle"		"vehicle/engine/chi-ha/idle"}
		{link_sound "engine_full"		"vehicle/engine/chi-ha/full"}
		{link_sound "exhaust"			"vehicle/engine/chi-ha/exhaust"}
		{link_sound "move"				"vehicle/tracks/chi-ha"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_heavy"}
	}
)

{"type97_shinhoto_120mm tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("Type1_MG")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
{"type97_shinhoto_47mm tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Type1_MG")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
{"type97_chi-ha tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("Type1_MG")
	}
}
{"type97_shi-ki"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Type1_MG")
	}
}
{"type95_ha-go tank"
	("ha-go_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Type1_MG")
	}
}
{"type3_ke-ri tank"
	("ha-go_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("Type1_MG")
	}
}
{"type4_ke-nu tank"
	("ha-go_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("Type1_MG")
	}
}
{"type1_chi-he tank"
	("chi-he_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
		("Type1_MG")
	}
}
{"type3_chi-nu tank"
	("chi-he_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Type1_MG")
	}
}
{"type5_chi-ri tank"
	("chi-he_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Type1_MG")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}
{"type2_ho-i tank"
	("chi-he_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Type1_MG")
	}
}
{"type2_ho-i_kou tank"
	("chi-he_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Type1_MG")
	}
}
{"type3_ho-ni tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Type1_MG")
	}
}
{"type1_ho-ni1 tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
	}
}
{"type1_ho-ni2 tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
	}
}
{"type4_ho-ro tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
	}
}
{"type5_ho-chi tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
	}
}
{"type89_i-go tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("Type1_MG")
	}
}
{"type89_i-go_early"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("Type1_MG")
	}
	{on fire "gun" 
		{ani_play "fire2"}
	}
}
{"type97_eng tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Type1_MG")
	}
}
{"type94_te-ke tank"
	("t27_sound")
	{on "add_weapon_sound" overload
		("Type1_MG")
	}
}
{"type92_tk"
	("t27_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("Type1_MG")
	}
}
{"type97_te-ke"
	("ha-go_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Type1_MG")
	}
}
{"type87 tank"
	("ba_sound")
	{on "add_weapon_sound" overload
		("Vickers_MG")
	}
}
{"type93 tank"
	("sdkfz222_sound")
	{on "add_weapon_sound" overload
		("Vickers_MG")
	}
}
{"type1_ho-ha"
	("hanomag_sound")
	{on "add_weapon_sound" overload
		("Type1_MG")
	}
}
{"type1_ho-ki"
	("t27_sound")
}
{"type1_ho-ki_mg"
	("t27_sound")
	{on "add_weapon_sound" overload
		("Type1_MG")
	}
}
{"type3_chi-nu2 tank"
	("chi-he_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Type1_MG")
	}
}
{"type4_ha-to"
	("chi-he_sound")
}
{"sdkfz251_stuka tank"
	("hanomag_sound")

	{on "event_no_crew" overload}
	{on "event_with_crew" overload}

	{on "gunner2_hatch_open" overload
		{ani_play "mgun_aa" +1.0 resume}
	}
}
{"t12gmc_jap tank" 
	("us_halftrack_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
}
{"type97_ka-ho tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("Type1_MG")
	}
	{on spawn
		{add_view "flamer_fire_tank" "flame" "foresight4"}
		{add_view "flamer_fire_barrel" "fire" "foresight4"}
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
	("flame_weapon" args flamer1 60 4 40)
}
{"type1_ho-i"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Type1_MG")
	}
}
{"type91_heavy"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("Type1_MG")
	}
}

;/*=========== Japan Vehicles End ===========*/

{"csaba40m"
	("sdkfz222_sound")
	{on "add_weapon_sound" overload
		("Gebauer_MG")
	}
}
{"csaba39m"
	("sdkfz222_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("Gebauer_MG")
	}
}
{"toldi2"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Gebauer_MG")
	}
}
{"toldi2_late"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Gebauer_MG")
	}
}
{"toldi1"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("Gebauer_MG")
	}
}
{"toldi1_rocket"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Gebauer_MG")
	}
}
{"pzkpfw38t_hun"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("ZB37")
	}
}
{"zrinyi2"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/hetzer/start"}
		{link_sound "engine_stop"		"vehicle/engine/hetzer/stop"}
		{link_sound "engine_idle"		"vehicle/engine/hetzer/idle"}
		{link_sound "engine_full"		"vehicle/engine/hetzer/full"}
		{link_sound "exhaust"			"vehicle/engine/hetzer/exhaust"}
		{link_sound "move"				"vehicle/tracks/hetzer"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
	}
}
{"zrinyi1"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/hetzer/start"}
		{link_sound "engine_stop"		"vehicle/engine/hetzer/stop"}
		{link_sound "engine_idle"		"vehicle/engine/hetzer/idle"}
		{link_sound "engine_full"		"vehicle/engine/hetzer/full"}
		{link_sound "exhaust"			"vehicle/engine/hetzer/exhaust"}
		{link_sound "move"				"vehicle/tracks/hetzer"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
	}
}
{"nimrod"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
}
{"turan1"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Gebauer_MG")
	}
}
{"turan1_late"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Cannon_37to40mm")
		("Gebauer_MG")
	}
}
{"turan2"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Gebauer_MG")
	}
}
{"turan2_late"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("Gebauer_MG")
	}
}
{"turan3"
	("pz38_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Gebauer_MG")
	}
}
{"pz3m_hun"
	("pz3_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("MG34")
	}
}
{"pz4e_hun"
	("pz4_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm_LV")
		("MG34")
	}
}
{"pz4f_hun"
	("pz4_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("MG34")
	}
}
{"pz4h_hun"
	("pz4_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("MG34")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}
{"marder2_hun"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
}
{"hetzer_hun"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/hetzer/start"}
		{link_sound "engine_stop"		"vehicle/engine/hetzer/stop"}
		{link_sound "engine_idle"		"vehicle/engine/hetzer/idle"}
		{link_sound "engine_full"		"vehicle/engine/hetzer/full"}
		{link_sound "exhaust"			"vehicle/engine/hetzer/exhaust"}
		{link_sound "move"				"vehicle/tracks/hetzer"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
	}
}
{"stug3g_hun"
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
		("Cannon_75to76mm")
		("MG34")
	}
}
{"pz6e_hun"
	("pz6_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("MG34")
	}
	{on "commander_hatch_open" overload
		{ani_play "open2"}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open2" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}
{"ijn_12cm_spg tank"
	("chi-ha_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("Cannon_Breech")
	}
}