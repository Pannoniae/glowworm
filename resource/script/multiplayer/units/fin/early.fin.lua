Purchases["early.fin"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry Squads
				-- Squads used in all doctrines
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_scout_early(fin)"},
					--]]

				-- All-round Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_civil_guard_early_all(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_all(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mg_early_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_early_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_mg_early_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_hrr_cav_rifle_early_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_hrr_cav_mg_early_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_urr_cav_rifle_early_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_urr_cav_mg_early_all(fin)"},
					--]]
	
				-- Defensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_fortress_rifle_early_def(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_def(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mg_early_def(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_eng_early_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_border_guard_early_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pio_early(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_early_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_mg_early_def(fin)"},
					--]]

				-- Irregular Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_military_police_early_irr(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_irr(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mg_early_irr(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_marksmen_rifle_early_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_swe_recon_early_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_swe_rifle_early_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_swe_jag_early_irr(fin)"},
					--]]

				-- Offensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_civil_guard_early_off(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_off(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mg_early_off(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_light_scout_rifle_early_off(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_light_scout_mg_early_off(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_assault_early_1_off(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_assault_early_2_off(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_scout_off(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_early_off(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_mg_early_off(fin)"},
					--]]
		
			-- Infantry Singles / Teams
				---[[
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_rifle(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_smg(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_sa(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_mg2(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_mg(fin)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "single_at(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_at_miner(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_engineer(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_tankman(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_medic(fin)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_sniper(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_officer(fin)"},
				--]]

			-- Cannons
				---[[
				--{priority = 1.0, type = {"Class", "Cannon", "Supply", "Ammo",}, unit = "inf_crate_fin"},

				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "maxim_m32_33_early"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "maxim_m1910_30_early"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "ds39_stand_fin_early"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "maxim_m32_33_early_off"},
				{priority = 1.0, type = {"Class1", "Cannon", "AA",}, unit = "20mm_itk35"},

				{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "20mm_l39"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "25mm_pstk37"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "37mm_pstk36"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "45mm_pstk32"},
				{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "76mm_k02"},

				{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "50mm_krh38"},
				{priority = 1.0, type = {"Class1", "Cannon", "Mortar",}, unit = "81mm_krh36"},
				{priority = 1.0, type = {"Class1", "Cannon", "Support",}, unit = "76mm_lk13"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_k13"},
				--]]

			-- Wheeled vehicles
				---[[
				{priority = 1.0, type = {"Class2", "Armored", "MG",},unit = "l182"},
				{priority = 1.0, type = {"Class3", "Armored",}, unit = "ba10_fin"},

				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "m42_truppenfahrrad"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "ford_3ton"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Ammo",}, unit = "ford_3ton_ammo"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Fuel",}, unit = "ford_3ton_fuel"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Engineer",}, unit = "ford_3ton_eng"},
				--]]

			-- Tankettes
				---[[
				{priority = 1.0, type = {"Class3", "Armored", "MG",}, unit = "t20_fin"},
				--]]

			-- Tanks
				---[[
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "ft17_mg_fin"},
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "ft17_fin"},
				{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "fin_captured_v_t37a"},
				{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "fin_captured_v_t26"},
				{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "fin_captured_v_bt5"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "vickers_6t_altb"},

				{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "t28_38_fin"},
				--]]


			-- Doctrine Point Units 

				--  All-round Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_assault_early(fin)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "Mortar",}, unit = "doctrine_50mm_krh38_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Armored",}, unit = "doctrine_ba6_fin_early"},
					

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "Support",}, unit = "doctrine_76mm_m1927_fin_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_76mm_k02_30_40_allround_early"},
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Infantry", "Team",}, unit = "doctrine_squad_signaller_early(fin)"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_170mm_minewerfer_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_155mm_h17_early"},
					--]]

				--  Defensive Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_engineer_early(fin)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "AT",}, unit = "doctrine_47mm_pstk39"},
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_heavy_engineer_early(fin)"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "Mortar",}, unit = "doctrine_120mm_krh40_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AA",}, unit = "doctrine_40mm_itk38b_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Cannon", "AA", "AT",}, unit = "doctrine_75mm_itk37_early"},

					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_107mm_k10_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_203mm_h17_early"},
					--]]

				--  Irregular Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Plane", "Airstrike",}, unit = "doctrine_blenheim_small_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_white_death"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_ot130_early"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Cannon", "Spotlight",}, unit = "doctrine_150mm_sw34_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Infantry",}, unit = "doctrine_squad_sissi_early(fin)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_76mm_k00"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier3", "Plane", "Airstrike",}, unit = "doctrine_blenheim_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_114mm_h18_how_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_105mm_k34_early"},
					--]]

				--  Offensive Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_command_early(fin)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Vehicle", "AA",}, unit = "doctrine_ford_3ton_breda_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t26e"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_t28_38_fin"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "Artillery",}, unit = "doctrine_122mm_m1910_fin_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_84mm_k18_early"},

					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_120mm_k78_31_early"},
					--]]
			--]====]
		}
	}
}
