Purchases["mid.fin"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry Squads
				-- Squads used in all doctrines
					---[[	
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_scout_mid(fin)"},
					--]]

				-- All-round Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_reserves_mid_all(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_all(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_vet_scout_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_vet_rifle_mid_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_light_scout_mid_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_assault_mid_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_elite_rifle_mid_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_scout_mid(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_mid_vet(fin)"},
					--]]
	
				-- Defensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_fortress_rifle_mid_def(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_def(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_eng_mid_def(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_eng_flame_mid_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_hq_lr_pio_mid_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_border_jag_mid_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_hq_lr_recon_mid_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_hq_lr_mid_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_hq_lr_jag_mid_def(fin)"},
					--]]

				-- Irregular Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_military_police_mid_irr(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_penal_mid_irr(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_marksmen_rifle_mid_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_mid_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_vet_cav_mid_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_hrr_cav_mid_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_urr_cav_mid_irr(fin)"},
					--]]

				-- Lend-Lease Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_reserves_mid_len(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_len(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_vet_rifle_mid_len(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pio_mid(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_swe_mid_len(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_mid_len(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_strike_mid_len(fin)"},
					--]]

			-- Infantry Singles / Teams
				---[[
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_rifle(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_smg(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_sa(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_mg2(fin)"}, --chauchat
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_mg(fin)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "single_at(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_ap_miner(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_at_miner(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_engineer(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_flamer(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_tankman(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_medic(fin)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_sniper(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_officer(fin)"},
				--]]

			-- Cannons
				---[[
				--{priority = 1.0, type = {"Class", "Cannon", "Supply", "Ammo",}, unit = "inf_crate_fin"},
				
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "maxim_m32_33_mid"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "maxim_m1910_30_mid"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "ds39_stand_fin_mid"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "mg08_fin_mid"},
				{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_itk35"},

				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "20mm_l39"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "25mm_pstk37"},
				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "37mm_pstk36"},
				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "45mm_pstk32_mid"},
				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "47mm_pstk39"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "76mm_k02_mid"},
				{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "75mm_pstk9738"},
				{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "76mm_itk31"},

				{priority = 1.0, type = {"Class1", "Cannon", "Mortar",}, unit = "50mm_krh38"},
				{priority = 1.0, type = {"Class1", "Cannon", "Mortar",}, unit = "81mm_krh36"},

				{priority = 1.0, type = {"Class1", "Cannon", "Support",}, unit = "76mm_m1927_fin_mid"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "114mm_h18_how_mid"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_k13"},
				--]]

			-- Wheeled vehicles
				---[[
				{priority = 1.0, type = {"Class1", "Vehicle", "AA",},unit = "ford_3ton_breda"},
				{priority = 1.0, type = {"Class2", "Armored", "MG",},unit = "l182"},
				{priority = 1.0, type = {"Class3", "Armored",}, unit = "ba10_fin_mid"},

				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "m42_truppenfahrrad"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "ford_v3000"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Ammo",}, unit = "ford_v3000_ammo"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Fuel",}, unit = "ford_v3000_fuel"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Engineer",}, unit = "ford_v3000_eng"},
				--]]

			-- Tankettes
				---[[
				{priority = 1.0, type = {"Class3", "Armored", "MG",}, unit = "t20_fin"},
				--]]

			-- Tanks
				---[[
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "ft17_mg_fin"},
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "ft17_fin"},
				{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "fin_captured_v_t26"},
				{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "fin_captured_v_bt5"},
				{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "fin_captured_v_t3476_mid"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "t26e_mid"},
				{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "t26c"},

				{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "t28_38_fin"},
				{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "t28e_fin"},
				--]]


			-- Doctrine Point Units 
			
				--  All-round Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_command_mid(fin)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t50_fin"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Tank", "Light", "AA",}, unit = "doctrine_l62"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Support",}, unit = "doctrine_84mm_k18_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Light",}, unit = "doctrine_bt42"},
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Infantry", "Team",}, unit = "doctrine_squad_signaller_mid(fin)"},

					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium", "AT",}, unit = "doctrine_stug3g_fin"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_kv1_42_fin"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_120mm_k78_31_mid"},
					--]]

				--  Defensive Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_engineer_mid(fin)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Cannon", "AA",}, unit = "doctrine_40mm_itk38b_mid"},
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_heavy_engineer_mid(fin)"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "Mortar",}, unit = "doctrine_120mm_krh40_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Cannon", "AA", "AT",}, unit = "doctrine_75mm_itk37_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Artillery",}, unit = "doctrine_122mm_m1910_fin_mid"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_155mm_k17_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_210mm_h17_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_210mm_nebelwerfer42_fin"},
					--]]
		
				--  Irregular Doctrine 
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Plane", "Airstrike",}, unit = "doctrine_blenheim_small_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_white_death_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "AA",}, unit = "doctrine_volvo_127d_itk40_mid"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Infantry",}, unit = "doctrine_squad_sissi_mid(fin)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_76mm_k02_30_40_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Mortar",}, unit = "doctrine_170mm_minewerfer_mid"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier3", "Plane", "Airstrike",}, unit = "doctrine_blenheim_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_105mm_k34_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_155mm_k17_mid"},
					--]]
		
				--  Lend-Lease Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Cannon", "MG",}, unit = "doctrine_panzernest"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Vehicle", "AA",}, unit = "doctrine_sdkfz10_flak38_fin"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "Artillery",}, unit = "doctrine_100mm_nbw35_fin"},
				
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Cannon", "Spotlight",}, unit = "doctrine_150mm_sw34_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_75mm_pak40_fin"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Artillery",}, unit = "doctrine_105mm_h33_mid"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery", }, unit = "doctrine_150mm_sfh18_fin"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Light", "Artillery",}, unit = "doctrine_pz38h_w40"},
					--]]
			--]====]
		}
	}
}
