////////////////////////////////////////////////////////////////////////////////
// NOTE : Generated by libevhtp.py. It is NOT supposed to modify this file.
////////////////////////////////////////////////////////////////////////////////
#ifndef __hustdb_handler_20160805180244_h__
#define __hustdb_handler_20160805180244_h__

#include "hustdb_handler_def.h"

void hustdb_exist_handler(hustdb_exist_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_get_handler(hustdb_get_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_put_handler(hustdb_put_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_del_handler(hustdb_del_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_keys_handler(hustdb_keys_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_stat_handler(hustdb_stat_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_stat_all_handler(evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_hexist_handler(hustdb_hexist_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_hget_handler(hustdb_hget_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_hset_handler(hustdb_hset_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_hdel_handler(hustdb_hdel_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_hkeys_handler(hustdb_hkeys_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_sismember_handler(hustdb_sismember_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_sadd_handler(hustdb_sadd_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_srem_handler(hustdb_srem_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_smembers_handler(hustdb_smembers_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_file_count_handler(evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_export_handler(hustdb_export_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_put_handler(hustmq_put_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_get_handler(hustmq_get_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_ack_handler(hustmq_ack_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_timeout_handler(hustmq_timeout_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_worker_handler(hustmq_worker_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_stat_handler(hustmq_stat_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_stat_all_handler(evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_max_handler(hustmq_max_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_lock_handler(hustmq_lock_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_purge_handler(hustmq_purge_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_pub_handler(hustmq_pub_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustmq_sub_handler(hustmq_sub_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_info_handler(evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_task_info_handler(evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_task_status_handler(hustdb_task_status_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zismember_handler(hustdb_zismember_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zscore_handler(hustdb_zscore_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zadd_handler(hustdb_zadd_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zrem_handler(hustdb_zrem_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zrangebyrank_handler(hustdb_zrangebyrank_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustdb_zrangebyscore_handler(hustdb_zrangebyscore_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_exist_handler(hustcache_exist_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_get_handler(hustcache_get_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_ttl_handler(hustcache_ttl_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_put_handler(hustcache_put_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_append_handler(hustcache_append_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_del_handler(hustcache_del_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_expire_handler(hustcache_expire_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_persist_handler(hustcache_persist_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_hexist_handler(hustcache_hexist_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_hget_handler(hustcache_hget_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_hset_handler(hustcache_hset_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_hdel_handler(hustcache_hdel_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_hincrby_handler(hustcache_hincrby_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);
void hustcache_hincrbyfloat_handler(hustcache_hincrbyfloat_ctx_t& args, evhtp_request_t * request, hustdb_network_ctx_t * ctx);

#endif // __hustdb_handler_20160805180244_h__