/**
 * @file usart_cfg.h
 * @author Jose Luis Figueroa 
 * @brief This module contains interface definitions for the USART
 * configuration. This is the header file for the definition of the
 * interface for retrieving the Universal Asynchronous Receiver
 * Transmitter configuration table.
 * @version 1.0
 * @date 2025-01-26
 * 
 * @copyright Copyright (c) 2023 Jose Luis Figueroa. MIT License.
 * 
 */
#ifndef USART_CFG_H_
#define USART_CFG_H_

/*****************************************************************************
 * Includes
******************************************************************************/

/*****************************************************************************
 * Preprocessor Constants
******************************************************************************/
/**
 * Defines the number of USART peripherals on the processor.
*/
#define USART_PORTS_NUMBER 3U

/** 
 * Set the value according with the number of USART peripheral
*/
#define USART_PORTS_NUMBER 1U

/*****************************************************************************
 * Typedefs
******************************************************************************/
/**
 * Defines the USART ports contained on the MCU device. It is used to specify
 * the specific USART peripheral to configure the register map.
*/
typedef enum
{
    USART1,      /**< USART1 */
    USART2,      /**< USART2 */
    USART6,      /**< USART6 */
    USART_MAX    /**< Defines the maximum USART port*/
}UsartPort_t;

/**
 * Defines the USART data word length.
*/
typedef enum
{
    USART_WORD_LENGTH_8,   /**< Defines bits: start 1, data 8, stop n*/
    USART_WORD_LENGTH_9,   /**< Defines bits: start 1, data 9, stop n*/
    USART_WORD_LENGTH_MAX  /**< Defines the maximum data bits*/
}UsartWordLength_t;





#endif /*USART_CFG_H_*/

