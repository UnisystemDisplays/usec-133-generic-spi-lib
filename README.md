OVERVIEW
--------
![img1](/Docs/img_1.png)

*usec-133-generic-spi-lib* is an easy to use, fast, free and fully portable C library for [*Unisystem USEC/USEM e-paper controller*](https://unisystem.com/product/displays-e-paper/displays/usec133sbsusn-electronic-paper-display-from-unisystem-co) equipped with 13.3-inch display.

LIBRARY API
-----------

'usec-133-generic-spi-lib' library provides minimal set of optimized functions for performing common tasks like e-paper module intialization, uploading new content and updating display:

```c
usec_ctx *
usec_init                    (void);

void
usec_deinit                  (usec_ctx       *ctx);

uint8_t
usec_get_temp                (usec_ctx       *ctx,
                              uint8_t        *temp_val);

uint8_t
usec_1bpp_mode               (usec_ctx       *ctx,
                              uint8_t         enable);
uint8_t
usec_img_upload              (usec_ctx       *ctx,
                              uint8_t        *img_data,
                              size_t          img_size,
                              uint8_t         img_bpp,
                              uint32_t        img_pos_x,
                              uint32_t        img_pos_y,
                              uint32_t        img_width,
                              uint32_t        img_height);

uint8_t
usec_img_update              (usec_ctx       *ctx,
                              uint32_t        area_pos_x,
                              uint32_t        area_pos_y,
                              uint32_t        area_width,
                              uint32_t        area_height,
                              uint8_t         update_mode,
                              uint8_t         update_wait);
```

LIBRARY USAGE EXAMPLE
---------------------

Thanks of highly-optimized API, fully working example needs only few lines of code:

```c
int
main()
{
  usec_ctx *ctx;
  uint8_t status;

  /* initialize controller */
  ctx = usec_init();
  if (ctx == NULL)
    {
      printf ("[error] cannot initialize e-ink controller\n\r");
      return;
    }

  usec_img_upload(...)
  usec_img_update(...)

  /* cleanup */
  usec_deinit(ctx);

  return EXIT_SUCCESS;
}
```

For more info, please check ready-to-use examples of *usec-133-generic-spi-lib* library integration for most popular embedded platforms (links below).

LIBRARY INTEGRATION
-------------------

To integrate *usec-133-generic-spi-lib* with your own hardware (microcontroller, single board computer, ...), everything what you need to do is to provide a low-level interface to the hardware by edditing *platform.c* and *platform.h* files. For more info, please check ready-to-use examples of *usec-133-generic-spi-lib* library integration for most popular embedded platforms like:

- *Raspberry Pi* - [*usec-133-raspberry-pi-spi-example*](https://github.com/UnisystemDisplays/usec-133-raspberry-pi-spi-example),
- *Raspberry RP2040* - [*usec-133-rp2040-spi-example*](https://github.com/UnisystemDisplays/usec-133-rp2040-spi-example),
- *Espressif ESP32* - [*usec-133-esp32-spi-example*](https://github.com/UnisystemDisplays/usec-133-esp32-spi-example),
- *STMicroelectronics STM32F4* - [*usec-133-nucleo-f429zi-spi-example*](https://github.com/UnisystemDisplays/usec-133-nucleo-f429zi-spi-example),
- *STMicroelectronics STM32H5* - [*usec-133-nucleo-h563zi-spi-example*](https://github.com/UnisystemDisplays/usec-133-nucleo-h563zi-spi-example)

GETTING HELP
------------

Please contact Unisystem support - [*<lukasz.skalski@unisystem.com>*](lukasz.skalski@unisystem.com) or [*<jacek.marcinkowski@unisystem.com>*](jacek.marcinkowski@unisystem.com)

LICENSE
-------

See *LICENSE.txt* file for details.
