Purchases["early.rus"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry Squads
				--[[
				-- Old Squads
				{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_border_early(rus)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_recon_early(rus)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifleunit_early(rus)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_heavy_early(rus)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_mountain_rifle_early(rus)"},
				--]]

				-- Squads used in all doctrines
					---[[	
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_border_early(rus)"},
					--]]

				-- All-round Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon_early_all(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_all(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_cav_sap_recon_early_all(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_early_all(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_para_early_all(rus)"},
					--]]
	
				-- Defensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon_early_def(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_def(rus)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_sapper_early_def(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_mountain_early_def(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_mountain_sapper_early_def(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_para_glider_early_def(rus)"},
					--]]

				-- Irregular Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_irr(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_heavy_early_irr_1(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_heavy_early_irr_2(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_mountain_recon_early_irr(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_mountain_early_irr(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_para_recon_early_irr(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_para_early_irr(rus)"},
					--]]

				-- Offensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon_early_off(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_off(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_early_off(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_sapper_early_off(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_para_early_off(rus)"},
					--]]

				-- Support Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_cossack_recon_early_sup(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_cossack_early_sup(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_mountain_early_sup(rus)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_mountain_sapper_early_sup(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_para_glider_recon_early_sup(rus)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_para_glider_early_sup(rus)"},
					--]]
	
			-- Infantry Singles / Teams
				---[[
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_rifle(rus)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_sa(rus)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_battlerifle(rus)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_mg(rus)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "single_atgrenade(rus)"},
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
				{priority = 1.0, type = {"Class3", "Cannon", "MG",}, unit = "dshk_stan"},
				{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "dshk_aa"},

				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "37mm_m30"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "45mm_m37"},
				{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "76mm_m1933"},

				{priority = 1.0, type = {"Class1", "Cannon", "Support",}, unit = "76mm_m1927"},
				{priority = 1.0, type = {"Class1", "Cannon", "Mortar",}, unit = "82mm_bm37"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "122mm_m30"},
				--]]

			-- Wheeled vehicles
				---[[
				{priority = 1.0, type = {"Class3", "Vehicle", "MG",}, unit = "m72"},
				{priority = 1.0, type = {"Class2", "Vehicle", "AA",}, unit = "gaz_aaa_maximx4"},
				{priority = 1.0, type = {"Class2", "Vehicle", "AA",}, unit = "zis5_dshk"},

				{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "fai_m"},
				{priority = 1.0, type = {"Class3", "Armored",}, unit = "ba6"},

				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "zis5"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "gaz_aaa"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Ammo",}, unit = "gaz_aaa_supply"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Fuel",}, unit = "gaz_fuel"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Engineer",}, unit = "zis5eng"},
				--]]

			-- Tankettes
				---[[
				{priority = 1.0, type = {"Class3", "Armored", "MG",}, unit = "t27"},
				--]]

			-- Tanks
				---[[
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "t26_31"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "t40"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "t26_33"},
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "bt2_da2"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "bt2"},
				{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "bt7"},

				{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "t28"},

				{priority = 1.0, type = {"Class2", "Tank", "Heavy",}, unit = "t35"},
				--]]


			-- Doctrine Point Units 

			--{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_paratroopers(rus)"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t37a"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry", "Vehicle", "MG",}, unit = "doctrine_m72_snipers"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_heavy(rus)"},
			--{priority = 1.0, type = {"Class", "Doctrine", "Tier3", "Cannon", "AT",}, unit = "doctrine_2zis2"},

				--  All-round Doctrine
					---[[
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "MG",}, unit = "doctrine_stans"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_bt7a_early"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Armored",}, unit = "doctrine_ba10"},
					
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Infantry", "Team",}, unit = "doctrine_squad_rus_signaller_early(rus)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "Artillery",}, unit = "doctrine_122mm_m1910_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_t28_38"},
					
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_122mm_a19_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_t347640"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_kv1_40"},
					--]]

				--  Defensive Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_sapper_motorised_early"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Cannon", "MG",}, unit = "doctrine_gunshields"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "AT",}, unit = "doctrine_45mm_m37"},
					
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Mortar",}, unit = "doctrine_120mm_pm38_early"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "AA",}, unit = "doctrine_37mm_61k_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_57mm_zis2_early"},
					
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_152mm_ml20_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_203mm_b4_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "AA", "AT",}, unit = "doctrine_85mm_52k_early"},
					--]]

				--  Irregular Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_spetsnaz_early(rus)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Cannon", "AT",}, unit = "doctrine_m41_ampulomet_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "AT",}, unit = "doctrine_76mm_rr"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Plane", "Airstrike",}, unit = "doctrine_yak1_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_76mm_f22_early"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Tank", "Light",}, unit = "doctrine_kht26_early"},
					
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier3", "Plane", "Airstrike",}, unit = "doctrine_il2_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_107mm_m1910_30"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_smk"},
					--]]

				--  Offensive Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Armored", "MG",}, unit = "doctrine_ba20_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t30"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t26mod38"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_76mm_m1902"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_t28e"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Heavy",}, unit = "doctrine_t35_late"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Vehicle", "AA", "AT",}, unit = "doctrine_yag10_29k_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_kv1_39"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_kv2_40_early"},
					--]]

				--  Support Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry", "Team",}, unit = "doctrine_squad_rus_politicalofficer_early(rus)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Tank", "Light", "Support",}, unit = "doctrine_su26_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_bt5_early"},
					
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Plane", "Recon",}, unit = "doctrine_po2_early"},
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2",  "Vehicle", "Unarmed", "Support", "Ammo",}, unit = "doctrine_rus_logistics_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AA", "AT",}, unit = "doctrine_76mm_m1938_early"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_152mm_br2"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_280mm_br5_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_2t3476_40"},
					--]]
			--]====]
		}
	}
}
