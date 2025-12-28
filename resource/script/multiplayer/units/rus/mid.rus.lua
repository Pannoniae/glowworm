Purchases["mid.rus"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry Squads
				--[[
				-- Old Squads
				{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_conscripts(rus)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_partisan(rus)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon(rus)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifleunit(rus)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Squad", "AT",}, unit = "squad_at_rifle(rus)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_paras(rus)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_marines(rus)"},
				--]]

				-- All-round Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_conscript_mid_all(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon_mid_all(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_all(rus)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_at_rifle_mid_all(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_guards_rifle_mid_all(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_elite_guards_rifle_mid_all(rus)"},
					--]]
	
				-- Defensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_penal_mid_def(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_nkvd_recon_mid_def(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_nkvd_rifle_mid_def(rus)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_nkvd_sapper_mid_def(rus)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_nkvd_at_rifle_mid_def(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_nkvd_mountain_mid_def(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_nkvd_mountain_cav_mid_def(rus)"},
					--]]

				-- Irregular Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_partisan_mid_irr(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon_mid_irr(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_irr(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_mid_irr_1(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_irr_2(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_irr_3(rus)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_at_rifle_mid_irr(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_mountain_mid_irr(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_mountain_cav_mid_irr(rus)"},
					--]]

				-- Offensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_conscript_mid_off(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon_mid_off(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_off(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_smg_mid_off(rus)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_at_rifle_mid_off(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_guards_rifle_mid_off(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_guards_para_mid_off_1(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_guards_para_mid_off_2(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_guards_para_mid_off_3(rus)"},
					--]]

				-- Lend-Lease Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_conscript_mid_len(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon_mid_len(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_len(rus)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_at_rifle_mid_len(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_marine_mid_len(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_bsf_marine_mid_len(rus)"},
					--]]

				-- Support Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_conscript_mid_sup(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_scout_mid_sup(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_sup(rus)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_sapper_mid_sup(rus)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_at_rifle_mid_sup(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_marine_mid_sup(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_bsf_marine_mid_sup(rus)"},
					--]]

			-- Infantry Singles / Teams
				---[[
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_rifle(rus)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_smg(rus)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_sa(rus)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Team",}, unit = "single_mg(rus)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "single_at(rus)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_riflegrenade(rus)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_ap_miner(rus)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_at_miner(rus)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_engineer(rus)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_flamer(rus)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_tankman(rus)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_medic(rus)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_sniper(rus)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_officer(rus)"},
				--]]

			-- Cannons
				---[[
				--{priority = 1.0, type = {"Class", "Cannon", "Supply", "Ammo",}, unit = "inf_crate_rus"},

				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "maxim"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "dshk_stan"},
				{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "25mm_72k"},

				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "45mm_m37"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "76mm_f22"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "76mm_zis3"},
				{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "57mm_zis2"},

				{priority = 1.0, type = {"Class1", "Cannon", "Support",}, unit = "76mm_m1927"},
				{priority = 1.0, type = {"Class1", "Cannon", "Mortar",}, unit = "82mm_bm37"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "122mm_m30"},
				--]]

			-- Wheeled vehicles
				---[[
				{priority = 1.0, type = {"Class3", "Vehicle", "MG",}, unit = "m72"},
				{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "gaz_aaa_maximx4"},
				{priority = 1.0, type = {"Class2", "Vehicle", "AA",}, unit = "zis5_dshk"},
				{priority = 1.0, type = {"Class1", "Vehicle", "AA",}, unit = "gaz_aaa_72k"},

				{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "ba20"},
				{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "ba64"},
				{priority = 1.0, type = {"Class3", "Armored",}, unit = "ba6"},

				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "zis5"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "gaz_aaa"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Ammo",}, unit = "gaz_aaa_supply"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Fuel",}, unit = "gaz_fuel"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Engineer",}, unit = "zis5eng"},
				--]]

			-- Tankettes
				---[[
				{priority = 1.0, type = {"Class3", "Armored", "MG",}, unit = "t20"},
				--]]

			-- Tanks
				---[[
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "t26_31"},
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "t40"},
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "t26_39"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "bt7"},

				{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "t28"},
				{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "t28_38"},
				{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "t28e"},
				{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "t3476_40"},
				{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "t3476_41"},
				{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "t3476_42"},

				{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "t35"},
				{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "t35_late"},
				{priority = 1.0, type = {"Class1", "Tank", "Heavy",}, unit = "kv1_40"},
				--]]

			-- Self-Propelled Guns
				---[[
				{priority = 1.0, type = {"Class2", "Tank", "Light", "Support",}, unit = "su76"},
				--]]


			-- Doctrine Point Units 
	
			--{priority = 1.0, type = {"Class3", "Doctrine", "Tier1",}, unit = "doctrine_squad_mountainrifles(rus)"},
			--{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Cannon", "AT",}, unit = "doctrine_76mm_f22_mid"},
			--{priority = 1.0, type = {"Class3", "Doctrine", "Tier2",}, unit = "doctrine_squad_guards_mid(rus)"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_smgunit(rus)"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_bt2_mid"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Infantry",}, unit = "doctrine_squad_penal(rus)"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_mechanized"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Cannon", "MG",}, unit = "doctrine_dshk_mid"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier1",}, unit = "doctrine_t26"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_57mm_zis2"},

				--  All-round Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_bt2_da2"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_bt7a_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_bt5_mid"},
					
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2",}, unit = "doctrine_squad_rus_signaller_mid(rus)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "Artillery",}, unit = "doctrine_122mm_m1910_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AA", "AT",}, unit = "doctrine_76mm_m1938_mid"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_122mm_a19_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_tankodesantniki"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy", "AT",}, unit = "doctrine_su152"},
					--]]

				--  Defensive Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_sapper_motorised_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Cannon", "AA",}, unit = "doctrine_37mm_61k_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "AT",}, unit = "doctrine_towed_m42"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Mortar",}, unit = "doctrine_120mm_pm38_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Vehicle", "Artillery",}, unit = "doctrine_zis6_bm8_48_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Light", "AT",}, unit = "doctrine_zis30"},

					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_152mm_ml20_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_203mm_b4_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "AA", "AT",}, unit = "doctrine_85mm_52k_mid"},
					--]]

				--  Irregular Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_spetsnaz_mid(rus)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Cannon",}, unit = "doctrine_m41_ampulomet"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_kht130_mid"},
					
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Plane", "Airstrike",}, unit = "doctrine_yak1_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_t3457_41"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_ot34"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier3", "Plane", "Airstrike",}, unit = "doctrine_il2_mid"},
					--{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Vehicle", "Artillery",}, unit = "doctrine_zis6_bm13_16_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_300mm_bm30"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy", "AT",}, unit = "doctrine_su100y"},
					--]]

				--  Offensive Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Armored", "MG",}, unit = "doctrine_ba20_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t60"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t70_mid"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Vehicle", "AA", "AT",}, unit = "doctrine_yag10_29k_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Light", "Artillery",}, unit = "doctrine_t60_bm8_24_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Heavy",}, unit = "doctrine_kv1s"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Medium", "Support",}, unit = "doctrine_su122"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_3xkv1"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_kv2_40_mid"},
					--]]

				--  Lend-Lease Doctrine
					---[[
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_m3_stuart_late_rus"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_valentine2_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Armored", "MG",}, unit = "doctrine_mmg_carrier_mid"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_m3_lee_rus_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Heavy",}, unit = "doctrine_churchill3"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Armored", "AT",}, unit = "doctrine_zis2_scoutcar_mg_mid"},

					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_2x_m4a2_75_early_rus_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Vehicle", "Artillery",}, unit = "doctrine_katyusha"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_107mm_m1910_30_mid"},
					--]]

				--  Support Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_rus_politicalofficer_mid(rus)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Tank", "Light", "Support",}, unit = "doctrine_su26_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t50_mid"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Plane", "Recon",}, unit = "doctrine_po2_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_t3476_41e"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Heavy",}, unit = "doctrine_kv8"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_152mm_br2_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_280mm_br5_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_kv1_42_mid"},
					--]]
			--]====]
		}
	}
}
