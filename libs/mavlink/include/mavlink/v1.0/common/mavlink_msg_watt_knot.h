#pragma once
// MESSAGE WATT_KNOT PACKING

#define MAVLINK_MSG_ID_WATT_KNOT 239

MAVPACKED(
typedef struct __mavlink_watt_knot_t {
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float voltage; /*< Volts*/
 float current; /*< Amperes*/
 float speed; /*< meters per second*/
 float course; /*< degrees*/
}) mavlink_watt_knot_t;

#define MAVLINK_MSG_ID_WATT_KNOT_LEN 24
#define MAVLINK_MSG_ID_WATT_KNOT_MIN_LEN 24
#define MAVLINK_MSG_ID_239_LEN 24
#define MAVLINK_MSG_ID_239_MIN_LEN 24

#define MAVLINK_MSG_ID_WATT_KNOT_CRC 68
#define MAVLINK_MSG_ID_239_CRC 68



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WATT_KNOT { \
    239, \
    "WATT_KNOT", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_watt_knot_t, time_usec) }, \
         { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_watt_knot_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_watt_knot_t, current) }, \
         { "speed", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_watt_knot_t, speed) }, \
         { "course", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_watt_knot_t, course) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WATT_KNOT { \
    "WATT_KNOT", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_watt_knot_t, time_usec) }, \
         { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_watt_knot_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_watt_knot_t, current) }, \
         { "speed", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_watt_knot_t, speed) }, \
         { "course", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_watt_knot_t, course) }, \
         } \
}
#endif

/**
 * @brief Pack a watt_knot message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param voltage Volts
 * @param current Amperes
 * @param speed meters per second
 * @param course degrees
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_watt_knot_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float voltage, float current, float speed, float course)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATT_KNOT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, voltage);
    _mav_put_float(buf, 12, current);
    _mav_put_float(buf, 16, speed);
    _mav_put_float(buf, 20, course);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WATT_KNOT_LEN);
#else
    mavlink_watt_knot_t packet;
    packet.time_usec = time_usec;
    packet.voltage = voltage;
    packet.current = current;
    packet.speed = speed;
    packet.course = course;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WATT_KNOT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WATT_KNOT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WATT_KNOT_MIN_LEN, MAVLINK_MSG_ID_WATT_KNOT_LEN, MAVLINK_MSG_ID_WATT_KNOT_CRC);
}

/**
 * @brief Pack a watt_knot message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param voltage Volts
 * @param current Amperes
 * @param speed meters per second
 * @param course degrees
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_watt_knot_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float voltage,float current,float speed,float course)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATT_KNOT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, voltage);
    _mav_put_float(buf, 12, current);
    _mav_put_float(buf, 16, speed);
    _mav_put_float(buf, 20, course);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WATT_KNOT_LEN);
#else
    mavlink_watt_knot_t packet;
    packet.time_usec = time_usec;
    packet.voltage = voltage;
    packet.current = current;
    packet.speed = speed;
    packet.course = course;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WATT_KNOT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WATT_KNOT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WATT_KNOT_MIN_LEN, MAVLINK_MSG_ID_WATT_KNOT_LEN, MAVLINK_MSG_ID_WATT_KNOT_CRC);
}

/**
 * @brief Encode a watt_knot struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param watt_knot C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_watt_knot_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_watt_knot_t* watt_knot)
{
    return mavlink_msg_watt_knot_pack(system_id, component_id, msg, watt_knot->time_usec, watt_knot->voltage, watt_knot->current, watt_knot->speed, watt_knot->course);
}

/**
 * @brief Encode a watt_knot struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param watt_knot C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_watt_knot_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_watt_knot_t* watt_knot)
{
    return mavlink_msg_watt_knot_pack_chan(system_id, component_id, chan, msg, watt_knot->time_usec, watt_knot->voltage, watt_knot->current, watt_knot->speed, watt_knot->course);
}

/**
 * @brief Send a watt_knot message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param voltage Volts
 * @param current Amperes
 * @param speed meters per second
 * @param course degrees
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_watt_knot_send(mavlink_channel_t chan, uint64_t time_usec, float voltage, float current, float speed, float course)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATT_KNOT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, voltage);
    _mav_put_float(buf, 12, current);
    _mav_put_float(buf, 16, speed);
    _mav_put_float(buf, 20, course);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATT_KNOT, buf, MAVLINK_MSG_ID_WATT_KNOT_MIN_LEN, MAVLINK_MSG_ID_WATT_KNOT_LEN, MAVLINK_MSG_ID_WATT_KNOT_CRC);
#else
    mavlink_watt_knot_t packet;
    packet.time_usec = time_usec;
    packet.voltage = voltage;
    packet.current = current;
    packet.speed = speed;
    packet.course = course;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATT_KNOT, (const char *)&packet, MAVLINK_MSG_ID_WATT_KNOT_MIN_LEN, MAVLINK_MSG_ID_WATT_KNOT_LEN, MAVLINK_MSG_ID_WATT_KNOT_CRC);
#endif
}

/**
 * @brief Send a watt_knot message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_watt_knot_send_struct(mavlink_channel_t chan, const mavlink_watt_knot_t* watt_knot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_watt_knot_send(chan, watt_knot->time_usec, watt_knot->voltage, watt_knot->current, watt_knot->speed, watt_knot->course);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATT_KNOT, (const char *)watt_knot, MAVLINK_MSG_ID_WATT_KNOT_MIN_LEN, MAVLINK_MSG_ID_WATT_KNOT_LEN, MAVLINK_MSG_ID_WATT_KNOT_CRC);
#endif
}

#if MAVLINK_MSG_ID_WATT_KNOT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_watt_knot_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float voltage, float current, float speed, float course)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, voltage);
    _mav_put_float(buf, 12, current);
    _mav_put_float(buf, 16, speed);
    _mav_put_float(buf, 20, course);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATT_KNOT, buf, MAVLINK_MSG_ID_WATT_KNOT_MIN_LEN, MAVLINK_MSG_ID_WATT_KNOT_LEN, MAVLINK_MSG_ID_WATT_KNOT_CRC);
#else
    mavlink_watt_knot_t *packet = (mavlink_watt_knot_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->voltage = voltage;
    packet->current = current;
    packet->speed = speed;
    packet->course = course;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATT_KNOT, (const char *)packet, MAVLINK_MSG_ID_WATT_KNOT_MIN_LEN, MAVLINK_MSG_ID_WATT_KNOT_LEN, MAVLINK_MSG_ID_WATT_KNOT_CRC);
#endif
}
#endif

#endif

// MESSAGE WATT_KNOT UNPACKING


/**
 * @brief Get field time_usec from watt_knot message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_watt_knot_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field voltage from watt_knot message
 *
 * @return Volts
 */
static inline float mavlink_msg_watt_knot_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field current from watt_knot message
 *
 * @return Amperes
 */
static inline float mavlink_msg_watt_knot_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field speed from watt_knot message
 *
 * @return meters per second
 */
static inline float mavlink_msg_watt_knot_get_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field course from watt_knot message
 *
 * @return degrees
 */
static inline float mavlink_msg_watt_knot_get_course(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a watt_knot message into a struct
 *
 * @param msg The message to decode
 * @param watt_knot C-struct to decode the message contents into
 */
static inline void mavlink_msg_watt_knot_decode(const mavlink_message_t* msg, mavlink_watt_knot_t* watt_knot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    watt_knot->time_usec = mavlink_msg_watt_knot_get_time_usec(msg);
    watt_knot->voltage = mavlink_msg_watt_knot_get_voltage(msg);
    watt_knot->current = mavlink_msg_watt_knot_get_current(msg);
    watt_knot->speed = mavlink_msg_watt_knot_get_speed(msg);
    watt_knot->course = mavlink_msg_watt_knot_get_course(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WATT_KNOT_LEN? msg->len : MAVLINK_MSG_ID_WATT_KNOT_LEN;
        memset(watt_knot, 0, MAVLINK_MSG_ID_WATT_KNOT_LEN);
    memcpy(watt_knot, _MAV_PAYLOAD(msg), len);
#endif
}
