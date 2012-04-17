#ifndef _NGX_HTTP_UPSTREAM_CHECK_MODELE_H_INCLUDED_
#define _NGX_HTTP_UPSTREAM_CHECK_MODELE_H_INCLUDED_

#include <ngx_config.h>
#include <ngx_core.h>
#include <nginx.h>


/* make nginx-0.8.22+ happy */
#if defined(nginx_version) && nginx_version >= 8022
typedef ngx_addr_t ngx_peer_addr_t;
#endif


ngx_uint_t ngx_http_check_add_peer(ngx_conf_t *cf,
        ngx_http_upstream_srv_conf_t *us, ngx_peer_addr_t *peer);

ngx_uint_t ngx_http_check_peer_down(ngx_uint_t index);

void ngx_http_check_get_peer(ngx_uint_t index);
void ngx_http_check_free_peer(ngx_uint_t index);


#endif //_NGX_HTTP_UPSTREAM_CHECK_MODELE_H_INCLUDED_

