#ifndef __XI_BSP_HTON_H__
#define __XI_BSP_HTON_H__

#include <sys/types.h>

/**
 * Convert an uint16_t from host- to network byte order.
 *
 * @param n uint16_t in host byte order
 * @return n in network byte order
 */
uint16_t htons( uint16_t n );
/**
 * Convert an uint16_t from network- to host byte order.
 *
 * @param n uint16_t in network byte order
 * @return n in host byte order
 */
uint16_t ntohs( uint16_t n );

/**
 * Convert an uint32_t from host- to network byte order.
 *
 * @param n uint32_t in host byte order
 * @return n in network byte order
 */
uint32_t htonl( uint32_t n );

/**
 * Convert an uint32_t from network- to host byte order.
 *
 * @param n uint32_t in network byte order
 * @return n in host byte order
 */
uint32_t ntohl( uint32_t n );

#endif /* __XI_BSP_HTON_H__ */
