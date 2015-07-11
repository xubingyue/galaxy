#pragma once

#include "protocol.h"

namespace gate_client
{
	enum c2g
	{
		c2g_start = protocol::Gate2GameBegin,
		
		//Dead
		req_game_gate_null_protocol,

		//temp

		server_info_req = protocol::Gate2GameBegin + 45,//����ʱ�䣬ʱ����
		gate_restart_req,
		game_close_notify_req,


		//����ϵͳ  1050~1099
// 		building_update_req = protocol::Gate2GameBegin + 50,
// 		building_upgrade_req,
// 		building_cd_clear_req,
		
		//��սϵͳ
		war_story_update_req = protocol::Gate2GameBegin + 100,
		war_story_battle_with_npc_req,
//		war_story_battle_with_npc_team_req,
		war_story_team_update_req,
		war_story_team_member_update_req,
		war_story_team_create_req,
		war_story_team_invite_req,
		war_story_team_change_member_pos_req,
		war_story_team_remove_member_req,
		war_story_team_dismiss_req,
		war_story_team_attack_req,
		war_story_team_join_req,
		war_story_team_quit_req,
		war_story_team_map_update_req,
		war_story_team_manual_update_req,
		war_story_team_annouce_attack_req,
		war_story_team_annouce_gain_item_req,
		war_story_chaper_reward1_req,
		war_story_chaper_reward2_req,
		war_story_team_annouce_create_team_req,
		war_story_team_quit_interface_req,
		war_story_team_bonus_update_req,
		war_story_team_leader_alive_req,
		war_story_chaper_reward3_req,
		war_story_team_npc_help_update_req,
		war_story_team_npc_help_req,
		war_story_team_add_npc_from_player_req,
		war_story_team_sweep_req,

		//�佫ϵͳ
		pilot_update_req = protocol::Gate2GameBegin + 150,
		pilot_enlist_req,
		pilot_fire_req,
		equip_pilot_req,
		off_equip_pilot_req,
		pilot_upgrade_attribute_req,/*ϴ������*/
		pilot_replace_attribute_req,/*�滻����*/
		pilot_revert_attribute_req,/*��ԭ����*/
		pilot_mode_convert_req, 
		pilot_cd_clear_req,
		pilot_upgrade_level_req,
		pilot_single_update_req,
		pilot_update_base_req,
		pilot_one_key_equip_req,


		//����ϵͳ
		embattle_update_req = protocol::Gate2GameBegin + 200,
		embattle_inFormat_req,
		enbattle_set_current_format_req,

		//����ϵͳ
		chat_req_start = protocol::Gate2GameBegin + 250,
		chat_send_to_part_req,
		chat_broadcast_req,
		chat_table_update_req,
		chat_show_req,
		chat_roll_broadcast_req,
		chat_voice_req,
		chat_danmu_req,
		chat_danmu_listen_req,
		chat_req_end,

		//����ϵͳ
		world_get_total_page_req  = protocol::Gate2GameBegin + 300,
		world_update_part_req,
		world_change_planet_req, 
		world_area_motify_flag_name_req,
		world_area_motify_leave_message_req,
		world_area_invested_myself_req,
		world_area_battle_req,

		//��Ʒϵͳ
		player_item_update_req  = protocol::Gate2GameBegin + 350,
		buy_item_req,
		sale_item_req,
		batch_sale_item_req,
		upgrade_equipmen_req,
		item_system_info_update_req,
		eq_deputy_properties_generate_req,			//��ͨϴ��
		item_equip_revolution_req,					//װ�������滻
		buy_bag_capacity_req,						//װ��չʾ
		player_item_use_req,
		item_compose_req,
		eq_deputy_properites_replace_req,
		eq_deputy_properites_keep_req,				//װ������ά��
		upgrade_equip_cd_clear_req,	
		eq_directional_deputy_properties_generate_req,  //����ϴ������
		item_disintegrate_req,//���߷ֽ�
		update_crystal_exchange_req,	//ˮ���һ���Ϣ����
		exchange_crystal_req,	//�һ���Ʒ
		degrade_equipmen_req,
		embedded_equipment_req,
		crytal_takeoff_equipment_req,


		//����ϵͳ
		player_role_update_req = protocol::Gate2GameBegin + 400,
		player_generate_role_req,
		player_change_name_req,
		player_get_CD_List_req,
		player_login_req,
		player_notic_account_name_req,
		player_levy_req,//����
		player_levy_update_req,
		player_levy_cd_clear_req,
		player_set_face_id_req,
		player_client_process_req,
		player_set_gender_req,
		player_invest_req,
		player_join_kingdom_req,
		player_join_min_kingdom_req,
		player_pay_req,

		//ϵͳ�ڲ�ѭ��
		system_callback__req_start = protocol::Gate2GameBegin + 450,
		player_guild_notice_req,
		player_war_pve_req,
		player_world_pvp_req, 
		player_npc_team_pve_req,
		player_guild_upgrade_to_leader_notice_req,
		game_set_gate_buffer_req,
		game_clear_gate_buffer_req,

		arena_summary_broadcast_inner_req,

		ruler_auto_set_title_info_inner_req,
		ruler_final_battle_inner_req,
		ruler_broadcast_inner_req,

		ally_op_update_inner_req,
		ally_info_update_inner_req,
		ally_active_op_reward_inner_req,

		inviter_info_update_oneself_update_req,

		starwar_update_info_inner_req,
		starwar_attack_with_player_inner_req,
		starwar_attack_with_npc_inner_req,
		starwar_task_update_inner_req,
		starwar_sub_supply_inner_req,
		starwar_notice_npc_battle_inner_req,

		world_boss_inner_deal_end_req,

		system_callback_req_end = protocol::Gate2GameBegin + 999,

		//VIPϵͳ
		vip_update_req = protocol::Gate2GameBegin + 1000,
		vip_pickup_vip_gift_req,
		vip_pickup_first_gift_req,
		vip_notify_first_gift_req,
		vip_month_card_reward_req,
		vip_charge_req,

		//��ְϵͳ
		office_update_req = protocol::Gate2GameBegin + 1500,
		office_receive_salary_req,
		office_promote_req,

		//����ϵͳ
		workshop_update_req = protocol::Gate2GameBegin + 1550, 
		workshop_yield_req,
		workshop_sale_req,
		workshop_auto_req,

		//�Ƽ�ϵͳ
		science_update_req	 = protocol::Gate2GameBegin + 1600,
		science_upgreade_req = protocol::Gate2GameBegin + 1601,
		 
		//����ϵͳ
		junling_update_req =  protocol::Gate2GameBegin + 1650,
		junling_clear_cd_req,
		junling_buy_req,

		//����ϵͳ
		guild_create_group_req = protocol::Gate2GameBegin + 1700,
		guild_help_update_req, 
		guild_join_group_req,
		guild_leave_group_req,
		guild_member_up_offcial_req,
		guild_kick_member_req,
		guild_motify_words_req, 
		guild_donate_group_req,
		guild_request_help_req,
		guild_response_join_member_req,
		guild_update_group_list_req,
		guild_update_group_member_req,
		guild_update_join_member_req,
		guild_update_history_req,
		guild_set_limit_req,
		guild_find_by_name_req,
		guild_transfer_leader_req,
		guild_cancel_join_req,
		guild_update_join_list_req,
		guild_update_base_req,
		guild_update_science_req,
		guild_set_scient_first_req,
		guild_change_flag_icon_req,
		guild_palyer_base_info_req,
		guild_respon_help_req,
		guild_trade_skill_upgrade_req,
		guild_trade_skill_update_req,

		//buff ϵͳ
		buff_udpate_client_req = protocol::Gate2GameBegin + 1750,

		//�о�ϵͳ
		study_update_req = protocol::Gate2GameBegin + 1800,
		delegate_req,
		delegate_store_req,
		delegate_sell_req,
		delegate_convert_req,
		delegate_clear_cd_req,
		psionic_research_req,
		psionic_reward_req,
		psionic_refresh_req,
		psionic_finish_immediate_req,
		psionic_10_refresh_req,
		psionic_cancel_research_req,
		delegate_activate_the_third_grid_req,
		delegate_free_time_end_notify_req,

		//������߽���ϵͳ
		online_award_reset_rep = protocol::Gate2GameBegin + 1850,		//���߽�������
		online_award_get_rewards_rep,							//��ȡ���߽���
		//online_award_logout_record_rep,									//�û��˳���Ϣ��¼

		//�ʼ�ϵͳ
		email_update_req = protocol::Gate2GameBegin + 1900,
		email_write_to_player_req,
		email_save_req,
 		email_get_gift_req,
		email_del_req,
		email_del_savelist_req,
		mail_newMailNotify_req,
		email_write_to_all_guild_member_req,


		//�̳�ϵͳ
		shop_update_req = protocol::Gate2GameBegin + 1950,
		shop_deal_req,
		shop_info_req,
		shop_buy_month_card_req,

		//ÿ��ǩ��
		sign_update_req = protocol::Gate2GameBegin + 2000,
		sign_reward_req,
		sign_reward_state_req,

		//������ϵͳ
		arena_main_update_req = protocol::Gate2GameBegin + 2050,
		arena_hero_rank_new_update_req,
		arena_hero_rank_old_update_req,
		arena_famous_person_rank_update_req,
		arena_challege_req,
		arena_get_reward_req,
		arena_get_year_reward_req,
		arena_clear_cd_req,
		arena_buy_challege_times_req,
		arena_new_lucky_ranking_list_req,
		arena_old_lucky_ranking_list_req,
		arena_get_lucky_reward_req,

		//GM����Э��
		gm_protocal_start_req = protocol::Gate2GameBegin + 2100,
		gm_player_base_info_update_req,
		gm_modify_player_base_info_req,
		gm_send_resource_to_player_req,
		gm_kick_player_req,
		gm_forbid_speaker_req,
		gm_allow_speaker_req,
		gm_forbid_speaker_update_req,
		gm_charge_gold_req,
		gm_roll_broadcast_update_req,
		gm_roll_broadcast_set_req,
		gm_roll_broadcast_del_req,
		gm_send_email_to_player_req,
		gm_player_item_update_req,
		gm_set_equip_level_req,
		gm_set_equip_add_attribute_req,
		gm_add_pilot_exp_req,
		gm_set_pilot_extra_attribute_req,
		gm_add_guild_science_exp_req,
		gm_allow_ip_info_update_req,
		gm_allow_ip_set_login_req,
		gm_update_guild_base_req,
		gm_update_guild_group_member_req,
		gm_send_gift_card_to_player_req,
		gm_custom_service_reply_req,
		gm_pilots_list_req,
		gm_single_pilot_info_req,
		gm_update_server_time_req,
		gm_add_server_time_req,
		gm_motify_player_name_req,
		gm_motify_war_process_req,
		gm_motify_guild_name_req,
		gm_motify_player_kingdom_req,
		gm_market_update_req,
		gm_market_modify_req,
		gm_secretory_list_req,
		gm_paper_update_req,
		gm_dispatch_paper_req,

		//��Ϊ��ʷԭ��gmЭ��ֿ������֣����������gmЭ��������gmЭ��ʵ����û������Ϊ����������Э��ϲ��Ļ���ı�Э��id��
		//��Ҫͬʱ�޸ĺ�̨��Ӧ��gmЭ��id���Ķ��Ƚ��鷳������û���Ķ��ˣ����Եȵ������Э��id������3149֮��
		//������ġ� = protocol::Gate2GameBegin + 2150����ȥ�����ϲ�������Э�顣
		gm_activity_game_param_update_req = protocol::Gate2GameBegin + 2150,
		gm_activity_game_param_modify_req,
		gm_shop_info_req,
		gm_shop_modify_req,
		gm_arena_rate_info_req,
		gm_arena_rate_modify_req,
		gm_activity_rebate_modify_req,
		gm_activity_point_modify_req,
		gm_set_explore_reward_req,
		gm_query_explore_reward_req,
		gm_activity_gift_defined_modify_req,
		gm_point_update_req,
		gm_rebate_update_req,
		gm_bgTask_info_req,
		gm_bgTask_modify_req,

		gm_protocal_end_req = protocol::Gate2GameBegin + 2299,

		//����buff
		global_buff_update_req = protocol::Gate2GameBegin + 2300,

		//��Ծ��ϵͳ
		activity_info_req = protocol::Gate2GameBegin + 2350,		//update event
		activity_time_limited_update_req,
		activity_get_reward_req,

		//Ԫ������ս
		ruler_update_req = protocol::Gate2GameBegin + 2400,
		ruler_term_info_req,
		ruler_challenge_req,
		ruler_title_info_req,
		ruler_set_title_info_req,
		ruler_betting_req,
		ruler_get_reward_req,
		ruler_clear_cd_req,

		//����ϵͳ
		hero_inherit_preview_req = protocol::Gate2GameBegin + 2450,
		hero_inherit_start_inherit_req,

		//����
		strategy_update_req = protocol::Gate2GameBegin + 2500,

		//��Դ����
		mine_res_update_req = protocol::Gate2GameBegin + 2550,
		mine_res_turn_page_req,
		mine_res_fight_record_req,
		mine_res_clear_fight_cd_req,
		mine_res_single_update_req,
		mine_res_fight_req,
		mine_res_free_scan_req,
		mine_res_general_scan_req,
		mine_res_advance_scan_req,
		mine_res_mine_req,
		mine_res_update_my_info_req,

		//����ϵͳ
		task_main_update_req = protocol::Gate2GameBegin + 2600,
		task_main_commit_req,
		task_branch_update_req,
		task_branch_commit_req,
		task_branch_tips_req,

		//�չʾϵͳ
		update_action_show_list_req = protocol::Gate2GameBegin + 2650,
		
		//��ֵ����
		rebate_update_req = protocol::Gate2GameBegin + 2750,
		rebate_pickup_gift_req,
		rebate_player_info_update_req,

		//��ֵ/���ѻ���
		point_update_req = protocol::Gate2GameBegin + 2800,
		point_exchange_req,
		point_player_info_update_req,
		
		//��������սϵͳ
		guild_battle_total_update_req = protocol::Gate2GameBegin + 2850,
		guild_battle_single_update_req,
		guild_battle_levy_req,
		guild_battle_apply_req,
		guild_battle_enter_req,
		guild_battle_enter_limit_req,
		guild_battle_enter_cancel_limit_req,
		guild_battle_enter_update_req,
		guild_battle_inspire_req,
		guild_battle_fight_req,
		guild_battle_exit_req,
		guild_battle_invite_req,
		
		//ս������
		share_link_report_req = protocol::Gate2GameBegin + 2900,

		//�Ǽ�̽��
		interplanetary_exploration_update_req = protocol::Gate2GameBegin + 2950,
		female_insect_nest_req,						// ĸ�泲Ѩ
		the_ancient_god_remains_req,				//�����ż�
		female_insect_nest_lottery_req,				//������������Ϣ
		the_ancient_god_remains_lottery_req,		

		// ս��ϵͳ
		ally_update_req = protocol::Gate2GameBegin + 3000,
		ally_search_req,
		ally_send_req,
		ally_cancel_req,
		ally_agree_req,
		ally_refuse_req,
		ally_dissolve_req,
		ally_del_req,
		ally_reward_req,
		ally_red_point_req,

		//�Զ������
		gift_defined_update_req = protocol::Gate2GameBegin + 3050,
		gift_defined_pickup_gift_req,
		gift_defined_player_info_update_req,

		//��ս
		starwar_player_info_req = protocol::Gate2GameBegin + 3100,
		starwar_move_req,
		starwar_main_info_req,
		starwar_report_list_req,
		starwar_main_update_req,
		starwar_kick_req,
		starwar_reward_req,
		starwar_notice_report_req,
		starwar_star_info_req,
		starwar_use_item_req,
		starwar_open_item_req,
		starwar_flush_item_req,
		starwar_buy_item_req,
		starwar_player_rank_req,
		starwar_country_rank_req,
		starwar_task_info_req,
		starwar_task_commit_req,
		starwar_buy_transfer_time_req,
		starwar_clear_transfer_cd_req,
		starwar_king_gather_req,
		starwar_officer_gather_req,
		starwar_notice_king_gather_req,
		starwar_ranking_reward_req,
		starwar_notice_unity_reward_req,
		starwar_great_event_req,
		starwar_notice_occupy_req,
		starwar_settle_npc_req,
		starwar_sign_star_req,
		starwar_get_shortest_path_req,

		//Ѳ��ϵͳ
		inspect_tour_update_req = protocol::Gate2GameBegin + 3150,
		inspect_tour_simple_finish_req,
		inspect_tour_xingjidadao_req,
		inspect_tour_beikunshangchuan_req,
		inspect_tour_fukuangyunshi_req,
		inspect_tour_xijiehaidao_req,
		inspect_tour_shenmishangdui_req,

		//�Ƽ�����ϵͳ
		invite_sys_info_update_req = protocol::Gate2GameBegin + 3200,
		input_invite_code_req,
		get_invite_reward_req,

		//̫��Ѱ��ϵͳ
		space_explore_player_info_req = protocol::Gate2GameBegin + 3250,
		space_explore_one_explore_req,
		space_explore_ten_explore_req,
		space_explore_update_req,

		//����boss
		world_boss_update_client_req = protocol::Gate2GameBegin + 3300,
		world_boss_attack_req,
		world_boss_reward_req,
		world_boss_keji_inspire_req,
		world_boss_gold_inspire_req,
		world_boss_clear_attack_cd_req,
		world_boss_close_ui_req,
		world_boss_remain_blood_req,
		world_boss_manual_update_client_req,
		world_boss_storage_capacity_update_req,
		world_boss_storage_capacity_req,
		world_boss_notify_ending_req,

		world_boss_inner_auto_attack_req,

		//ó��ϵͳ
		player_trade_update_req = protocol::Gate2GameBegin + 3350,
		player_trade_item_update_req,
		trade_center_event_update_req,
		trade_accept_task_req,
		trade_cancel_task_req,
		trade_complete_task_req,
		trade_move_req,
		trade_buy_req,
		trade_sale_req,
		trade_table_update_req,
		trade_park_req,
		trade_use_item_req,
		trade_blanking_req,
		trade_sim_update_req,
		trade_task_fast_complete_req,
		trade_voucher_show_req,
		trade_first_time_req,
		trade_plane_upgrade_req,

		// ����ϵͳ
		market_info_req = protocol::Gate2GameBegin + 3400,
		market_update_req,
		market_deal_req,

		// ����ϵͳ
		secretary_info_req = protocol::Gate2GameBegin + 3450,
		secretary_lottery_req,
		secretary_embattle_req,
		secretary_resolve_req,
		secretary_combine_req,
		secretary_swallow_req,
		secretary_upgrade_req,
		secretary_swap_exp_req,
		secretary_rename_req,
		secretary_lock_req,
		secretary_update_req,
		secretary_param_req,
		secretary_show_req,

		//���ϵͳ
		paper_update_personal_req = protocol::Gate2GameBegin + 3500,
		paper_update_table_req,
		paper_dispacth_paper_req,
		paper_rob_req,
		paper_recovery_paper_req,
		paper_send_again_req,
		paper_exchange_req,
		paper_reward_list_req,
		
		paper_inner_send_gm_paper_req,

		bgTask_info_req = protocol::Gate2GameBegin + 3550,
		bgTask_update_req,
		bgTask_task_reward_req,
		bgTask_integral_reward_req,

		c2g_end = protocol::Gate2GameEnd
	};

	enum g2c
	{
		g2c_begin = protocol::Game2GateBegin,

		//Dead
		resp_game_gate_null_protocol,

		server_info_resp = protocol::Game2GateBegin + 45,//����ʱ�䣬ʱ����
		gate_restart_resp,
		game_close_notify_resp,

		//����ϵͳ  11050~11099
// 		building_update_resp = protocol::Game2GateBegin + 50,
// 		building_upgrade_resp,
// 		building_cd_clear_resp,

		//��սϵͳ
		war_story_update_resp = protocol::Game2GateBegin + 100,
		war_story_battle_with_npc_resp,
//		war_story_battle_with_npc_team_resp,
		war_story_team_update_resp,
		war_story_team_member_update_resp,
		war_story_team_create_resp,
		war_story_team_invite_resp,
		war_story_team_change_member_pos_resp,
		war_story_team_remove_member_resp,
		war_story_team_dismiss_resp,
		war_story_team_attack_resp,
		war_story_team_join_resp,
		war_story_team_quit_resp,
		war_story_team_map_update_resp,
		war_story_team_manual_update_resp,
		war_story_team_annouce_attack_resp,
		war_story_team_annouce_gain_item_resp,
		war_story_chaper_reward1_resp,
		war_story_chaper_reward2_resp,
		war_story_team_annouce_create_team_resp,
		war_story_team_quit_interface_resp,
		war_story_team_bonus_update_resp,
		war_story_team_leader_alive_resp,
		war_story_chaper_reward3_resp,
		war_story_team_npc_help_update_resp,
		war_story_team_npc_help_resp,
		war_story_team_add_npc_from_player_resp,
		war_story_team_sweep_resp,

		//�佫ϵͳ
		pilot_update_resp = protocol::Game2GateBegin + 150,
		pilot_enlist_resp,
		pilot_fire_resp,
		equip_pilot_resp,
		off_equip_pilot_resp,
		pilot_upgrade_attribute_resp,/*ϴ������*/
		pilot_replace_attribute_resp,
		pilot_revert_attribute_resp,/*��ԭ����*/
		pilot_mode_convert_resp, 
		pilot_cd_clear_resp,
		pilot_upgrade_level_resp,
		pilot_single_update_resp,
		pilot_update_base_resp,
		pilot_one_key_equip_resp,

		//����ϵͳ
		embattle_update_resp = protocol::Game2GateBegin + 200,
		embattle_inFormat_resp,
		enbattle_set_current_format_resp,

		//����ϵͳ
		chat_resp_start = protocol::Game2GateBegin + 250,
		chat_send_to_part_resp,
		chat_broadcast_resp,
		chat_table_update_resp,
		chat_show_resp,
		chat_roll_broadcast_resp,
		chat_voice_resp,
		chat_danmu_resp,
		chat_danmu_listen_resp,
		chat_resp_end,

		//����ϵͳ
		world_get_total_page_resp = protocol::Game2GateBegin + 300,
		world_update_part_resp,
		world_change_planet_resp, 
		world_area_motify_flag_name_resp,
		world_area_motify_leave_message_resp,
		world_area_invested_myself_resp,
		world_area_battle_resp,

		//��Ʒϵͳ
		player_item_update_resp  = protocol::Game2GateBegin + 350,
		buy_item_resp,
		sale_item_resp,
		batch_sale_item_resp,
		upgrade_equipmen_resp,
		item_system_info_update_resp,
		eq_deputy_properties_generate_resp,
		item_equip_revolution_resp,
		buy_bag_capacity_resp,
		player_item_use_resp,
		item_compose_resp,
		eq_deputy_properites_replace_resp,
		eq_deputy_properites_keep_resp,				//װ������ά��,
		upgrade_equip_cd_clear_resp,
		eq_directional_deputy_properties_generate_resp,  //����ϴ������
		item_disintegrate_resp,
		update_crystal_exchange_resp,	//��Ϣ����
		exchange_crystal_resp,	//�һ���Ʒ
		degrade_equipmen_resp,
		embedded_equipment_resp,
		crytal_takeoff_equipment_resp,


		//����ϵͳ
		player_role_update_resp = protocol::Game2GateBegin + 400,
		player_generate_role_resp,
		player_change_name_resp,
		player_get_CD_List_resp,
		player_login_resp,
		player_notic_account_name_resp,
		player_levy_resp,
		player_levy_update_resp,
		player_levy_cd_clear_resp,
		player_set_face_id_resp,
		player_client_process_resp,
		player_set_gender_resp,
		player_invest_resp,
		player_join_kingdom_resp,
		player_join_min_kingdom_resp,
		player_pay_resp,

		//ϵͳ�ڲ�ѭ��
		system_callback__resp_start = protocol::Game2GateBegin + 450,
		player_guild_notice_resp,
		player_war_pve_resp,
		player_world_pvp_resp,
		player_npc_team_pve_resp,
		player_guild_upgrade_to_leader_notice_resp,
		game_set_gate_buffer_resp,
		game_clear_gate_buffer_resp,

		arena_summary_broadcast_inner_resp,

		ruler_auto_set_title_info_inner_resp,
		ruler_final_battle_inner_resp,
		ruler_broadcast_inner_resp,

		ally_op_update_inner_resp,
		ally_info_update_inner_resp,
		ally_active_op_reward_inner_resp,

		inviter_info_update_oneself_update_resp,

		starwar_update_info_inner_resp,
		starwar_attack_with_player_inner_resp,
		starwar_attack_with_npc_inner_resp,
		starwar_task_update_inner_resp,
		starwar_sub_supply_inner_resp,
		starwar_notice_npc_battle_inner_resp,

		world_boss_inner_deal_end_resp,

		system_callback_resp_end = protocol::Game2GateBegin + 999,

		//VIPϵͳ
		vip_update_resp = protocol::Game2GateBegin + 1000,
		vip_pickup_vip_gift_resp,
		vip_pickup_first_gift_resp,
		vip_notify_first_gift_resp,
		vip_month_card_reward_resp,
		vip_charge_resp,

		//��ְϵͳ
		office_update_resp = protocol::Game2GateBegin + 1500,
		office_receive_salary_resp,
		office_promote_resp,


		//����ϵͳ
		workshop_update_resp = protocol::Game2GateBegin + 1550, 
		workshop_yield_resp,
		workshop_sale_resp,
		workshop_auto_resp,
		 
		//�Ƽ�ϵͳ
		science_update_resp	  = protocol::Game2GateBegin + 1600,
		science_upgrade_resp = protocol::Game2GateBegin + 1601,
		 
		//����ϵͳ
		junling_update_resp =  protocol::Game2GateBegin + 1650,
		junling_clear_cd_resp,
		junling_buy_resp,

		//����ϵͳ
		guild_create_group_resp = protocol::Game2GateBegin + 1700,
		guild_help_update_resp,
		guild_join_group_resp,
		guild_leave_group_resp,
		guild_member_up_offcial_resp,
		guild_kick_member_resp,
		guild_motify_words_resp, 
		guild_donate_group_resp,
		guild_request_help_resp,
		guild_response_join_member_resp,
		guild_update_group_list_resp,
		guild_update_group_member_resp,
		guild_update_join_member_resp,
		guild_update_history_resp,
		guild_set_limit_resp,
		guild_find_by_name_resp,
		guild_transfer_leader_resp,
		guild_cancel_join_resp,
		guild_update_join_list_resp,
		guild_update_base_resp,
		guild_update_science_resp,
		guild_set_scient_first_resp,
		guild_change_flag_icon_resp,
		guild_palyer_base_info_resp,
		guild_respon_help_resp,
		guild_trade_skill_upgrade_resp,
		guild_trade_skill_update_resp,

		//buff ϵͳ
		buff_udpate_client_resp = protocol::Game2GateBegin + 1750,

		//�о�ϵͳ
		study_update_resp = protocol::Game2GateBegin + 1800,
		delegate_resp,
		delegate_store_resp,
		delegate_sell_resp,
		delegate_convert_resp,
		delegate_clear_cd_resp,
		psionic_research_resp,
		psionic_reward_resp,
		psionic_refresh_resp,
		psionic_finish_immediate_resp,
		psionic_10_refresh_resp,
		psionic_cancel_research_resp,
		delegate_activate_the_third_grid_resp,
		delegate_free_time_end_notify_resp,
	
		//������߽���ϵͳ
		online_award_reset_resp = protocol::Game2GateBegin + 1850,		//���߽�������
		online_award_get_rewards_resp,							//��ȡ���߽���
		//online_award_logout_record_resp,									//�û��˳���Ϣ��¼

		//�ʼ�ϵͳ
		email_update_resp = protocol::Game2GateBegin + 1900,
		email_write_to_player_resp,
		email_save_resp,
		email_get_gift_resp,
		email_del_resp,
		email_del_savelist_resp,
		mail_newMailNotify_resp,
		email_write_to_all_guild_member_resp,

		//�̳�ϵͳ
		shop_update_resp = protocol::Game2GateBegin + 1950,
		shop_deal_resp,
		shop_info_resp,
		shop_buy_month_card_resp,

		//ÿ��ǩ��
		sign_update_resp = protocol::Game2GateBegin + 2000,
		sign_reward_resp,
		sign_reward_state_resp,

		//������ϵͳ
		arena_main_update_resp = protocol::Game2GateBegin + 2050,
		arena_hero_rank_new_update_resp,
		arena_hero_rank_old_update_resp,
		arena_famous_person_rank_update_resp,
		arena_challege_resp,
		arena_get_reward_resp,
		arena_get_year_reward_resp,
		arena_clear_cd_resp,
		arena_buy_challege_times_resp,
		arena_new_lucky_ranking_list_resp,
		arena_old_lucky_ranking_list_resp,
		arena_get_lucky_reward_resp,

		//GM����Э��
		gm_protocal_start_resp = protocol::Game2GateBegin + 2100,
		gm_player_base_info_update_resp,
		gm_modify_player_base_info_resp,
		gm_send_resource_to_player_resp,
		gm_kick_player_resp,
		gm_forbid_speaker_resp,
		gm_allow_speaker_resp,
		gm_forbid_speaker_update_resp,
		gm_charge_gold_resp,
		gm_roll_broadcast_update_resp,
		gm_roll_broadcast_set_resp,
		gm_roll_broadcast_del_resp,
		gm_send_email_to_player_resp,
		gm_player_item_update_resp,
		gm_set_equip_level_resp,
		gm_set_equip_add_attribute_resp,
		gm_add_pilot_exp_resp,
		gm_set_pilot_extra_attribute_resp,
		gm_add_guild_science_exp_resp,
		gm_allow_ip_info_update_resp,
		gm_allow_ip_set_login_resp,
		gm_update_guild_base_resp,
		gm_update_guild_group_member_resp,
		gm_send_gift_card_to_player_resp,
		gm_custom_service_reply_resp,
		gm_pilots_list_resp,
		gm_single_pilot_info_resp,
		gm_update_server_time_resp,
		gm_add_server_time_resp,
		gm_motify_player_name_resp,
		gm_motify_war_process_resp,
		gm_motify_guild_name_resp,
		gm_motify_player_kingdom_resp,
		gm_market_update_resp,
		gm_market_modify_resp,
		gm_secretory_list_resp,
		gm_paper_update_resp,
		gm_dispatch_paper_resp,

		//��Ϊ��ʷԭ��gmЭ��ֿ������֣����������gmЭ��������gmЭ��ʵ����û������Ϊ����������Э��ϲ��Ļ���ı�Э��id��
		//��Ҫͬʱ�޸ĺ�̨��Ӧ��gmЭ��id���Ķ��Ƚ��鷳������û���Ķ��ˣ����Եȵ������Э��id������13149֮��
		//������ġ� = protocol::Game2GateBegin + 2150����ȥ�����ϲ�������Э�顣
		gm_activity_game_param_update_resp = protocol::Game2GateBegin + 2150,
		gm_activity_game_param_modify_resp,
		gm_shop_info_resp,
		gm_shop_modify_resp,
		gm_arena_rate_info_resp,
		gm_arena_rate_modify_resp,
		gm_activity_rebate_modify_resp,
		gm_activity_point_modify_resp,
		gm_set_explore_reward_resp,
		gm_query_explore_reward_resp,
		gm_activity_gift_defined_modify_resp,
		gm_point_update_resp,
		gm_rebate_update_resp,
		gm_bgTask_info_resp,
		gm_bgTask_modify_resp,

		gm_protocal_end_resp = protocol::Game2GateBegin + 2299,

		//����buff
		global_buff_update_resp = protocol::Game2GateBegin + 2300,

		//��Ծ��ϵͳ
		activity_info_resp = protocol::Game2GateBegin + 2350,
		activity_time_limited_update_resp,
		activity_get_reward_resp,

		//Ԫ������ս
		ruler_update_resp = protocol::Game2GateBegin + 2400,
		ruler_term_info_resp,
		ruler_challenge_resp,
		ruler_title_info_resp,
		ruler_set_title_info_resp,
		ruler_betting_resp,
		ruler_get_reward_resp,
		ruler_clear_cd_resp,

		//����ϵͳ
		hero_inherit_preview_resp = protocol::Game2GateBegin + 2450,
		hero_inherit_start_inherit_resp,

		//����
		strategy_update_resp = protocol::Game2GateBegin + 2500,

		//��Դ����
		mine_res_update_resp = protocol::Game2GateBegin + 2550,
		mine_res_turn_page_resp,
		mine_res_fight_record_resp,
		mine_res_clear_fight_cd_resp,
		mine_res_single_update_resp,
		mine_res_fight_resp,
		mine_res_free_scan_resp,
		mine_res_general_scan_resp,
		mine_res_advance_scan_resp,
		mine_res_mine_resp,
		mine_res_update_my_info_resp,

		//����ϵͳ
		task_main_update_resp = protocol::Game2GateBegin + 2600,
		task_main_commit_resp,
		task_branch_update_resp,
		task_branch_commit_resp,
		task_branch_tips_resp,

		//�չʾϵͳ
		update_action_show_list_resp = protocol::Game2GateBegin + 2650,
		notice_client_update_bonus_par_resp,							//֪ͨ�ͻ��˸��»�ӳɲ���

		//��ֵ����
		rebate_update_resp = protocol::Game2GateBegin + 2750,
		rebate_pickup_gift_resp,
		rebate_player_info_update_resp,

		//��ֵ/���ѻ���
		point_update_resp = protocol::Game2GateBegin + 2800,
		point_exchange_resp,
		point_player_info_update_resp,

		//��������սϵͳ
		guild_battle_total_update_resp = protocol::Game2GateBegin + 2850,
		guild_battle_single_update_resp,
		guild_battle_levy_resp,
		guild_battle_apply_resp,
		guild_battle_enter_resp,
		guild_battle_enter_limit_resp,
		guild_battle_enter_cancel_limit_resp,
		guild_battle_enter_update_resp,
		guild_battle_inspire_resp,
		guild_battle_fight_resp,
		guild_battle_exit_resp,
		guild_battle_invite_resp,

		//ս������
		share_link_report_resp = protocol::Game2GateBegin + 2900,

		//�Ǽ�̽��
		interplanetary_exploration_update_resp = protocol::Game2GateBegin + 2950,
		female_insect_nest_resp,						// ĸ�泲Ѩ
		the_ancient_god_remains_resp,				//�����ż�,
		female_insect_nest_lottery_resp,				//������������Ϣ
		the_ancient_god_remains_lottery_resp,

		// ս��ϵͳ
		ally_update_resp = protocol::Game2GateBegin + 3000,
		ally_search_resp,
		ally_send_resp,
		ally_cancel_resp,
		ally_agree_resp,
		ally_refuse_resp,
		ally_dissolve_resp,
		ally_del_resp,
		ally_reward_resp,
		ally_red_point_resp,

		//�Զ������
		gift_defined_update_resp = protocol::Game2GateBegin + 3050,
		gift_defined_pickup_gift_resp,
		gift_defined_player_info_update_resp,

		//��ս
		starwar_player_info_resp = protocol::Game2GateBegin + 3100,
		starwar_move_resp,
		starwar_main_info_resp,
		starwar_report_list_resp,
		starwar_main_update_resp,
		starwar_kick_resp,
		starwar_reward_resp,
		starwar_notice_report_resp,
		starwar_star_info_resp,
		starwar_use_item_resp,
		starwar_open_item_resp,
		starwar_flush_item_resp,
		starwar_buy_item_resp,
		starwar_player_rank_resp,
		starwar_country_rank_resp,
		starwar_task_info_resp,
		starwar_task_commit_resp,
		starwar_buy_transfer_time_resp,
		starwar_clear_transfer_cd_resp,
		starwar_king_gather_resp,
		starwar_officer_gather_resp,
		starwar_notice_king_gather_resp,
		starwar_ranking_reward_resp,
		starwar_notice_unity_reward_resp,
		starwar_great_event_resp,
		starwar_notice_occupy_resp,
		starwar_settle_npc_resp,
		starwar_sign_star_resp,
		starwar_get_shortest_path_resp,

		//Ѳ��ϵͳ
		inspect_tour_update_resp = protocol::Game2GateBegin + 3150,
		inspect_tour_simple_finish_resp,
		inspect_tour_xingjidadao_resp,
		inspect_tour_beikunshangchuan_resp,
		inspect_tour_fukuangyunshi_resp,
		inspect_tour_xijiehaidao_resp,
		inspect_tour_shenmishangdui_resp,

		//�Ƽ�����ϵͳ
		invite_sys_info_update_resp = protocol::Game2GateBegin + 3200,
		input_invite_code_resp,
		get_invite_reward_resp,

		//̫��Ѱ��ϵͳ
		space_explore_player_info_resp = protocol::Game2GateBegin + 3250,
		space_explore_one_explore_resp,
		space_explore_ten_explore_resp,
		space_explore_update_resp,

		//����boss
		world_boss_update_client_resp = protocol::Game2GateBegin + 3300,
		world_boss_attack_resp,
		world_boss_reward_resp,
		world_boss_keji_inspire_resp,
		world_boss_gold_inspire_resp,
		world_boss_clear_attack_cd_resp,
		world_boss_close_ui_resp,
		world_boss_remain_blood_resp,
		world_boss_manual_update_client_resp,
		world_boss_storage_capacity_update_resp,
		world_boss_storage_capacity_resp,
		world_boss_notify_ending_resp,

		world_boss_inner_auto_attack_resp,

		//ó��
		player_trade_update_resp = protocol::Game2GateBegin + 3350,
		player_trade_item_update_resp,
		trade_center_event_update_resp,
		trade_accept_task_resp,
		trade_cancel_task_resp,
		trade_complete_task_resp,
		trade_move_resp,
		trade_buy_resp,
		trade_sale_resp,
		trade_table_update_resp,
		trade_park_resp,
		trade_use_item_resp,
		trade_blanking_resp,
		trade_sim_update_resp,
		trade_task_fast_complete_resp,
		trade_voucher_show_resp,
		trade_first_time_resp,
		trade_plane_upgrade_resp,

		// ����ϵͳ
		market_info_resp = protocol::Game2GateBegin + 3400,
		market_update_resp,
		market_deal_resp,

		// ����ϵͳ
		secretary_info_resp = protocol::Game2GateBegin + 3450,
		secretary_lottery_resp,
		secretary_embattle_resp,
		secretary_resolve_resp,
		secretary_combine_resp,
		secretary_swallow_resp,
		secretary_upgrade_resp,
		secretary_swap_exp_resp,
		secretary_rename_resp,
		secretary_lock_resp,
		secretary_update_resp,
		secretary_param_resp,
		secretary_show_resp,

		//���ϵͳ
		paper_update_personal_resp = protocol::Game2GateBegin + 3500,
		paper_update_table_resp,
		paper_dispacth_paper_resp,
		paper_rob_resp,
		paper_recovery_paper_resp,
		paper_send_again_resp,
		paper_exchange_resp,
		paper_reward_list_resp,

		paper_inner_send_gm_paper_resp,
		
		bgTask_info_resp = protocol::Game2GateBegin + 3550,
		bgTask_update_resp,
		bgTask_task_reward_resp,
		bgTask_integral_reward_resp,

		g2c_end = protocol::Game2GateEnd
	};
}