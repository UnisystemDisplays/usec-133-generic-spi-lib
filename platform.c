#include "platform.h"

/*
 * platform_init()
 */
uint8_t
platform_init (usec_ctx *ctx)
{
  /* TODO: init platform here (spi, gpio, ...) */
  return USEC_DEV_OK;
}

/*
 * platform_deinit()
 */
uint8_t
platform_deinit (usec_ctx *ctx)
{
  /* TODO: deinitialize platform (spi, gpio, ...) */
  return USEC_DEV_OK;
}

/*
 * platform_delay_ms()
 */
uint8_t
platform_delay_ms (void      *platform,
                   uint16_t   delay_ms)
{
  /* TODO: add platform-specific delay function here */
  return USEC_DEV_OK;
}

/*
 * platform_hw_reset()
 */
uint8_t
platform_hw_reset (void *platform)
{
  /* TODO: set RESET pin to HIGH-LOW-HIGH sequence */
  return USEC_DEV_OK;
}

/*
 * platform_spi_write_byte()
 */
uint8_t
platform_spi_write_byte (void    *platform,
                         uint8_t  val)
{
  /* TODO: add platform-specific spi_write_byte function */
  return USEC_DEV_OK;
}

/*
 * platform_spi_write_bytes()
 */
uint8_t
platform_spi_write_bytes (void      *platform,
                          uint8_t   *data,
                          uint32_t   len)
{
  /* TODO: add platform-specific spi_write_multi_bytes function */
  return USEC_DEV_OK;
}

/*
 * platform_spi_read_byte()
 */
uint8_t
platform_spi_read_byte (void *platform)
{
  /* TODO: add platform-specific spi_read_byte function */
}

/*
 * platform_spi_cs_high()
 */
uint8_t
platform_spi_cs_high (void     *platform,
                      uint8_t   cs_num)
{
  /* TODO: set CS gpio to HIGH (1) */
  return USEC_DEV_OK;
}

/*
 * platform_spi_cs_low()
 */
uint8_t
platform_spi_cs_low (void     *platform,
                     uint8_t   cs_num)
{
  /* TODO: set CS gpio to LOW (0) */
  return USEC_DEV_OK;
}

/*
 * platform_gpio_read()
 */
uint8_t
platform_gpio_read (void *platform)
{
  /* TODO: read 'RDY' pin value */
}
