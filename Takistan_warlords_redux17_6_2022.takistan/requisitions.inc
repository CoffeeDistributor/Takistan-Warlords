class CfgWLRequisitionPresets //EDITED
{
	class A3ReduxAll
	{
		class WEST
		{
			class Infantry
			{
				class CUP_B_US_Soldier_OCP 					{cost = 50;		requirements[]={};	};	// "Rifleman"
				class CUP_B_BAF_Soldier_Paratrooper_DDPM	{cost = 50;		requirements[]={};	};	// "Para Trooper"
				class CUP_B_USMC_SpecOps_des				{cost = 75;		requirements[]={};	};	// "CTRG Scout"
				class CUP_B_US_Crew_OCP						{cost = 50;		requirements[]={};	};	// "Crewman"
				class CUP_B_BAF_Soldier_Helipilot_DDPM 		{cost = 50;		requirements[]={};	};	// "Helicopter Pilot"
				class CUP_B_USMC_Pilot_des 					{cost = 50;		requirements[]={};	};	// "Pilot"
				class CUP_B_US_Soldier_GL_OCP 				{cost = 55;		requirements[]={};	};	// "Grenadier"
				
				class CUP_B_US_Medic_OCP					{cost = 50;		requirements[]={};	};	// "Combat Life Saver"
				class CUP_B_US_Soldier_AR_OCP				{cost = 55;		requirements[]={};	};	// "Autorifleman"
				class CUP_B_US_Soldier_Marksman_OCP			{cost = 60;		requirements[]={};	};	// "Marksman"
				class CUP_B_US_Soldier_Engineer_OCP			{cost = 350;	requirements[]={};	};	// "Repair Specialist"
				class CUP_B_FR_Soldier_AR_DES				{cost = 50;		requirements[]={};	};	// "Heavy Gunner"
				class CUP_B_US_Soldier_Marksman_EBR_OCP		{cost = 75;		requirements[]={};	};	// "Sharpshooter"
				class CUP_B_US_Sniper_M107_OCP				{cost = 75;	requirements[]={};	};	// "Sniper"
			};
			class Vehicles
			{
				class B_Quadbike_01_F						{cost =  100;	requirements[]={};	};	// "Quad Bike"
				class CUP_B_nM1025_Unarmed_USA_DES			{cost = 500;	requirements[]={};	};	// "hmwy"
				class CUP_B_MTVR_USA        				{cost = 500;	requirements[]={};	};	// "Transport"
				class CUP_B_MTVR_Refuel_USA		    		{cost = 1000;	requirements[]={};	};	// "Fuel"
				class CUP_B_nM1025_SOV_M2_USA_DES			{cost = 850;	requirements[]={};	};	// "m2 hmwy open"
				class CUP_B_HMMWV_Crows_M2_USA              {cost = 950;	requirements[]={};	};	// "HMWY (crow M2)"
				class CUP_B_M1151_Deploy_USA                {cost = 800;	requirements[]={};	};	// "HMWY (HMG)"
				class B_G_Offroad_01_armed_F				{cost = 500;	requirements[]={};	};	// "Offroad (HMG)"
				class CUP_B_M1167_USA						{cost = 2500;	requirements[]={};	};	// "Prowler (AT)"
				class CUP_B_MTVR_Repair_USA					{cost = 1800;	requirements[]={};	};	// "HEMTT Repair"
				class CUP_B_MTVR_Ammo_USA				    {cost = 2000;	requirements[]={};	};	// "HEMTT Ammo"
				class CUP_B_RG31_M2_GC_USA				    {cost = 1500;	requirements[]={};	};	// "Hunter HMG"
				class CUP_B_RG31_Mk19_USA				    {cost = 1650;	requirements[]={};	};	// "Hunter GMG"
				
				class CUP_B_M1130_CV_M2_Desert				{cost = 1300;	requirements[]={};	};	// "BLUFOR Gorgon"
				class CUP_B_M1128_MGS_Desert				{cost = 4200;	requirements[]={};	};	// "AMV-7 Marshall"
				class CUP_B_M1135_ATGMV_Desert				{cost = 3000;	requirements[]={};	};	// "IFV-6c Panther"
				class CUP_B_M6LineBacker_USA_D				{cost = 4200;	requirements[]={};	};	// "Linebacker"
				class CUP_B_M163_Vulcan_USA				    {cost = 3500;	requirements[]={};	};	// "Vulcan"
				class CUP_B_nM1097_AVENGER_USA_DES          {cost = 3500;	requirements[]={};	};	// "Avnger"
				class CUP_B_M2A3Bradley_USA_D               {cost = 4500;	requirements[]={};	};	// "Bradley"
				class CUP_B_M1A1SA_Desert_US_Army			{cost = 5500;	requirements[]={};	};	// "M2A1 Slammer"
				class CUP_B_M1A2C_Desert_US_Army     	    {cost = 7500;	requirements[]={};	};	// "M2A1 Slammer UP"
				class CUP_B_M270_HE_USA                     {cost = 18000;	requirements[]={};	};	// "M4 Scorcher"  
				 
			};
			class Aircraft
			{
				class CUP_B_MH6J_OBS_USA					{cost = 900;	requirements[]={};	};	// "MH-9 Hummingbird"
				class CUP_B_UH60M_FFV_US					{cost = 1250;	requirements[]={};	};	// "MH-9 Hummingbird"
				class CUP_B_AH6M_USA                		{cost = 2500;	requirements[]={"A"};	};	// "AH-9 Pawnee"
				class CUP_B_UH1D_gunship_GER_KSK_Des     	{cost = 2200;	requirements[]={"A"};	};	// "UH-80 Ghost Hawk"
				class CUP_B_CH47F_USA    					{cost = 700;	requirements[]={"A"};	};	// "CH-67 Huron"
				class CUP_B_MV22_USMC       				{cost = 1000;	requirements[]={};	};	// "V-44 X Blackfish(Inf)";
				class CUP_B_MV22_VIV_USMC					{cost = 1000;	requirements[]={};	};	// "V-44 X Blackfish(Vic)";
				class CUP_B_MV22_USMC_RAMPGUN				{cost = 2000;	requirements[]={};	};	// "V-44 X Blackfish (Armed)"
				class CUP_B_MH60L_DAP_4x_US			        {cost = 5500;	requirements[]={"A"};	};	// "CH-67 Huron"
				class CUP_B_CESSNA_T41_ARMED_USA			{cost = 1500;	requirements[]={};	};	// "F/A-181 Black Wasp II";
				class CUP_B_AH64D_DL_USA        			{cost = 8000;	requirements[]={"A"};	};	// "F/A-181 Black Wasp II Stealth";
				class CUP_B_A10_DYN_USA             		{cost = 13000;	requirements[]={"A"};	};	// "A-10";
				
			};
			class Naval
			{
				class CUP_B_Frigate_ANZAC                  {cost = 40000;	requirements[]={"W"};	};	// "F/A-181 Black Wasp II Stealth";
			};
			class Gear
			{
				class CUP_BOX_USMC_WpsLaunch_F				{cost = 1000;	requirements[]={};	};	// "Launchers [NATO]"
				class CUP_BOX_US_ARMY_WpsLaunch_F			{cost = 1500;	requirements[]={};	};	// "F/A-181 Black Wasp II";
				class CUP_BOX_USMC_AmmoOrd_F			{cost = 1000;	requirements[]={};	};	// "F/A-181 Black Wasp II";
				class Box_NATO_AmmoVeh_F					{cost = 1000;	requirements[]={};	};	// "F/A-181 Black Wasp II";
			};
			class Defences
			{
				class CUP_B_M2StaticMG_MiniTripod_US		{cost = 100;	requirements[]={};	};	// "Mk30 HMG .50"
				class CUP_B_M2StaticMG_US					{cost = 100;	requirements[]={};	};	// "Mk30 HMG .50 (Raised)"
				class Land_GuardTower_01_F					{cost = 800;	requirements[]={};	};	// "Basepart"
				class Wire					{cost = 100;	requirements[]={};	};	// "Basepart"
				class Land_DragonsTeeth_01_1x1_new_F					{cost = 200;	requirements[]={};	};	// "Basepart"
				class Land_HBarrier3					{cost = 250;	requirements[]={};	};	// "Basepart"
				class Land_HBarrier1					{cost = 100;	requirements[]={};	};	// "Basepart"
				class Land_SandbagBarricade_01_half_F					{cost = 200;	requirements[]={};	};	// "Basepart"
				class Land_SandbagBarricade_01_F					{cost = 200;	requirements[]={};	};	// "Basepart"
				class Land_BagFence_Long_F					{cost = 250;	requirements[]={};	};	// "Basepart"
				class Land_HBarrierTower_F					{cost = 800;	requirements[]={};	};	// "Basepart"
				class Land_Hlaska					{cost = 500;	requirements[]={};	};	// "Basepart"
				class Land_ControlTower_01_F					{cost = 2000;	requirements[]={};	};	// "Basepart"
				class CUP_B_CUP_Stinger_AA_pod_US			{cost = 1500;	requirements[]={};	};	// "Static Titan Launcher (AA) [NATO]"
				class CUP_B_TOW2_TriPod_US					{cost = 2000;	requirements[]={};	};	// "Static Titan Launcher (AT) [NATO]"
				class B_Radar_System_01_F					{cost = 5000;	requirements[]={};	offset[]={0, 5.3, 0};};	// "AN/MPQ-105 Radar"
				class CUP_B_M252_US							{cost = 5500;	requirements[]={};	};	// "Mortar"
				class CUP_B_M119_US							{cost = 10000;	requirements[]={};	};	// "Mortar"
				class B_UGV_01_rcws_F						{cost = 2500;	requirements[]={};	};	// "UGAS" 
				class B_UGV_02_Demining_F					{cost = 1500;	requirements[]={};	};	// "UGAS demining"
				

			};
		};
		class EAST
		{
			class Infantry
			{
				class CUP_O_RU_Soldier_Ratnik_BeigeDigital	         {cost = 50;	requirements[]={};	};	// "Rifleman"
				class CUP_O_RU_Soldier_Crew_M_BeigeDigital 	         {cost = 50;	requirements[]={};	};	// "Crewman"
				class CUP_O_RU_Pilot_M_EMR 					         {cost = 50;	requirements[]={};	};	// "Pilot"
				class CUP_O_RU_Soldier_GL_Ratnik_BeigeDigital	     {cost = 55;	requirements[]={};	};	// "Grenadier"
				class CUP_O_RU_Recon_Medic_Ratnik_BeigeDigital	     {cost = 50;	requirements[]={};	};	// "Combat Life Saver"
				class CUP_O_RU_Soldier_AR_Ratnik_BeigeDigital		 {cost = 55;	requirements[]={};	};	// "Autorifleman"
				class CUP_O_RU_Soldier_A_Ratnik_BeigeDigital		 {cost = 55;	requirements[]={};	};	// "Ammo Bearer"
				class CUP_O_RU_Soldier_Marksman_Ratnik_BeigeDigital	 {cost = 50;	requirements[]={};	};	// "Marksman"
				class CUP_O_RU_Soldier_Repair_Ratnik_BeigeDigital	 {cost = 350;	requirements[]={};	};	// "Repair Specialist"
				class CUP_O_RU_Soldier_MG_M_BeigeDigital			 {cost = 60;	requirements[]={};	};	// "Heavy Gunner"
				class CUP_O_RU_Soldier_Marksman_M_BeigeDigital		 {cost = 70;	requirements[]={};	};	// "Sharpshooter"
				class CUP_O_RU_Sniper_KSVK_M_EMR				     {cost = 70;	requirements[]={};	};	// "Sniper"
			};
			class Vehicles
			{=
		      { 
				class O_Quadbike_01_F						{cost = 100;	requirements[]={};	};	// "Quad Bike"
				class CUP_O_UAZ_Unarmed_RU					{cost = 450;	requirements[]={};	};	// "Qilin (Unarmed)"
				class CUP_O_GAZ_Vodnik_Unarmed_RU			{cost = 650;	requirements[]={};	};	// "Ifrit"
				class CUP_O_Kamaz_RU				        {cost = 450;	requirements[]={};	};	// "Tempest Transport"
				class CUP_O_Kamaz_Refuel_RU					{cost = 1000;	requirements[]={};	};	// "Tempest Fuel"
				class CUP_O_UAZ_MG_RU						{cost = 800;	requirements[]={};	};	// "Qilin (Minigun)"
				class O_G_Offroad_01_armed_F				{cost = 800;	requirements[]={};	};	// "Offroad (HMG)"
				class CUP_O_UAZ_METIS_RU			    	{cost = 2000;	requirements[]={};	};	// "Qilin (AT)"
				class CUP_O_Kamaz_Repair_RU				    {cost = 1800;	requirements[]={};	};	// "Tempest Repair"
				class CUP_O_Kamaz_Reammo_RU				    {cost = 2000;	requirements[]={};	};	// "Tempest Ammo"
				class CUP_O_GAZ_Vodnik_BPPU_RU			    {cost = 1300;	requirements[]={};	};	// "Ifrit HMG"
				class CUP_O_BTR80A_DESERT_RU			    {cost = 2400;	requirements[]={};	};	// "MSE-3 Marid"
				class CUP_O_BTR90_RU					    {cost = 2900;	requirements[]={};	};	// "Ifrit GMG"
				class CUP_O_BMP2_RU				            {cost = 4000;	requirements[]={};	};	// "BTR-K Kamysh"
				class CUP_O_2S6M_RU					        {cost = 5500;	requirements[]={};	};	// "ZSU-39 Tigris"
				class CUP_O_Ural_ZU23_RU				    {cost = 1500;	requirements[]={};	};	// "ZSU-39 Tigris"
				class CUP_O_T72_RU						    {cost = 4800;	requirements[]={};	};	// "T-140 Angara"
				class CUP_O_T90_RU					        {cost = 7000;	requirements[]={};	};	// "T-140K Angara"
				class CUP_O_BM21_RU						    {cost = 18000;	requirements[]={};	};	// "2S9 Sochor"
				

			};
			class Aircraft
			{
				class CUP_O_Mi8_medevac_RU			        {cost = 500;	requirements[]={};	};	// "PO-30 Orca (Unarmed)"
				class CUP_O_UH1H_TKA		            {cost = 500;	requirements[]={};	};	// "PO-30 Orca"
				class CUP_O_UH1H_gunship_TKA		            {cost = 2500;	requirements[]={"A"};	};	// "PO-30 Orca"
				class CUP_O_Mi6T_RU				            {cost = 700;	requirements[]={};	};	// "Mi-290 Taru"
				class CUP_O_Mi6A_RU			                {cost = 700;	requirements[]={};	};	// "Mi-290 Taru (Transport)"
				class CUP_O_Mi8_RU 		                    {cost = 1500;	requirements[]={"A"};	};	// "Mi-290 Taru (Medical)"
				class CUP_O_Mi24_V_Dynamic_RU 	            {cost = 5000;	requirements[]={"A"};	};	// "F/A-181 Black Wasp II";
				class CUP_O_Ka52_RU             	        {cost = 8500;	requirements[]={"A"};	};	// "Y-32 Xi'an (vehicle Transport)"
				class CUP_O_Ka50_DL_RU             	        {cost = 11500;	requirements[]={"A"};	};	// "Y-32 Xi'an (vehicle Transport)"
				class CUP_I_CESSNA_T41_ARMED_ION             	        {cost = 1900;	requirements[]={"A"};	};	// "Y-32 Xi'an (vehicle Transport)"
				class CUP_O_Su25_Dyn_RU		                {cost = 11000;	requirements[]={"A"};	};	// "To-199 Neophron (CAS)"
				class CUP_O_L39_TK					        {cost = 3000;	requirements[]={"A"};	};	// "F/A-181 Black Wasp II";
				
			};
			class Naval
			{
				class O_Boat_Armed_01_hmg_F					{cost = 750;	requirements[]={"W"};	};	// "Speedboat HMG"
			};
			class Gear
			{
				class CUP_BOX_RU_WpsLaunch_F				{cost = 1000;	requirements[]={};	};	// "Launchers [CSAT]"
				class CUP_BOX_RU_AmmoOrd_F			{cost = 1000;	requirements[]={};	};	// "Ordnance Box";
				class Box_East_AmmoVeh_F					{cost = 1000;	requirements[]={};	};	// "Vehicle Ammo [CSAT]"
			};
			class Defences
			{
				class CUP_O_AGS_RU_M_BeigeDigital			{cost = 100;	requirements[]={};	};	// "Mk30 HMG .50"
				class CUP_O_KORD_high_RU					{cost = 100;	requirements[]={};	};	// "Mk30 HMG .50"
				class CUP_O_KORD_RU						    {cost = 100;	requirements[]={};	};	// "Mk30 HMG .50 (Raised)"
				class Land_GuardTower_01_F					{cost = 800;	requirements[]={};	};	// "Basepart"
				class Wire					{cost = 100;	requirements[]={};	};	// "Basepart"
				class Land_DragonsTeeth_01_1x1_new_F					{cost = 200;	requirements[]={};	};	// "Basepart"
				class Land_HBarrier3					{cost = 250;	requirements[]={};	};	// "Basepart"
				class Land_HBarrier1					{cost = 100;	requirements[]={};	};	// "Basepart"
				class Land_SandbagBarricade_01_half_F					{cost = 200;	requirements[]={};	};	// "Basepart"
				class Land_SandbagBarricade_01_F					{cost = 200;	requirements[]={};	};	// "Basepart"
				class Land_BagFence_Long_F					{cost = 250;	requirements[]={};	};	// "Basepart"
				class Land_HBarrierTower_F					{cost = 800;	requirements[]={};	};	// "Basepart"
				class Land_Hlaska					{cost = 500;	requirements[]={};	};	// "Basepart"
				class Land_ControlTower_01_F					{cost = 2000;	requirements[]={};	};	// "Basepart"
				class CUP_O_Igla_AA_pod_RU					{cost = 1400;	requirements[]={};	};	// "Static Titan Launcher (AA) [CSAT]"
				class CUP_O_Kornet_RU						{cost = 2000;	requirements[]={};	};	// "Static Titan Launcher (AT) [CSAT]"
				class CUP_O_Metis_RU						{cost = 2000;	requirements[]={};	};	// "Static Titan Launcher (AT) [CSAT]"
				class O_Radar_System_02_F					{cost = 5000;	requirements[]={};	offset[]={0, 5.3, 0};};	// "R-750 Cronus Radar"
				class CUP_O_2b14_82mm_RU					{cost = 6000;	requirements[]={};	};	// "Mortar"
				class CUP_O_D30_RU							{cost = 10000;	requirements[]={};	};	// "Mortar"
				class O_UGV_01_rcws_F						{cost = 2500;	requirements[]={};	};	// "UGAV rcws"
				class O_UGV_02_Demining_F					{cost = 1500;	requirements[]={};	};	// "UGAV demining"

			};
		};
	};
};