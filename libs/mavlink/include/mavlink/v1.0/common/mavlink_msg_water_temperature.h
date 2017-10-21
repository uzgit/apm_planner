#pragma once
// MESSAGE WATER_TEMPERATURE PACKING

#define MAVLINK_MSG_ID_WATER_TEMPERATURE 238

MAVPACKED(
typedef struct __mavlink_water_temperature_t {
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float water_temperature; /*< depth under the transducer * 100 (in feet?)*/
 int32_t latitude; /*< Latitude, expressed as degrees * 1E7*/
 int32_t longitude; /*< Longitude, expressed as degrees * 1E7*/
 int32_t altitude_amsl; /*< Altitude above mean sea level (meters)*/
}) mavlink_water_temperature_t;

#define MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN 24
#define MAVLINK_MSG_ID_WATER_TEMPERATURE_MIN_LEN 24
#define MAVLINK_MSG_ID_238_LEN 24
#define MAVLINK_MSG_ID_238_MIN_LEN 24

#define MAVLINK_MSG_ID_WATER_TEMPERATURE_CRC 103
#define MAVLINK_MSG_ID_238_CRC 103



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WATER_TEMPERATURE { \
    238, \
    "WATER_TEMPERATURE", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_water_temperature_t, time_usec) }, \
         { "water_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_water_temperature_t, water_temperature) }, \
         { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_water_temperature_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_water_temperature_t, longitude) }, \
         { "altitude_amsl", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_water_temperature_t, altitude_amsl) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WATER_TEMPERATURE { \
    "WATER_TEMPERATURE", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_water_temperature_t, time_usec) }, \
         { "water_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_water_temperature_t, water_temperature) }, \
         { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_water_temperature_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_water_temperature_t, longitude) }, \
         { "altitude_amsl", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_water_temperature_t, altitude_amsl) }, \
         } \
}
#endif

/**
 * @brief Pack a water_temperature message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param water_temperature depth under the transducer * 100 (in feet?)
 * @param latitude Latitude, expressed as degrees * 1E7
 * @param longitude Longitude, expressed as degrees * 1E7
 * @param altitude_amsl Altitude above mean sea level (meters)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_water_temperature_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float water_temperature, int32_t latitude, int32_t longitude, int32_t altitude_amsl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, water_temperature);
    _mav_put_int32_t(buf, 12, latitude);
    _mav_put_int32_t(buf, 16, longitude);
    _mav_put_int32_t(buf, 20, altitude_amsl);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN);
#else
    mavlink_water_temperature_t packet;
    packet.time_usec = time_usec;
    packet.water_temperature = water_temperature;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude_amsl = altitude_amsl;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WATER_TEMPERATURE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WATER_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_CRC);
}

/**
 * @brief Pack a water_temperature message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param water_temperature depth under the transducer * 100 (in feet?)
 * @param latitude Latitude, expressed as degrees * 1E7
 * @param longitude Longitude, expressed as degrees * 1E7
 * @param altitude_amsl Altitude above mean sea level (meters)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_water_temperature_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float water_temperature,int32_t latitude,int32_t longitude,int32_t altitude_amsl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, water_temperature);
    _mav_put_int32_t(buf, 12, latitude);
    _mav_put_int32_t(buf, 16, longitude);
    _mav_put_int32_t(buf, 20, altitude_amsl);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN);
#else
    mavlink_water_temperature_t packet;
    packet.time_usec = time_usec;
    packet.water_temperature = water_temperature;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude_amsl = altitude_amsl;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WATER_TEMPERATURE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WATER_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_CRC);
}

/**
 * @brief Encode a water_temperature struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param water_temperature C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_water_temperature_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_water_temperature_t* water_temperature)
{
    return mavlink_msg_water_temperature_pack(system_id, component_id, msg, water_temperature->time_usec, water_temperature->water_temperature, water_temperature->latitude, water_temperature->longitude, water_temperature->altitude_amsl);
}

/**
 * @brief Encode a water_temperature struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param water_temperature C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_water_temperature_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_water_temperature_t* water_temperature)
{
    return mavlink_msg_water_temperature_pack_chan(system_id, component_id, chan, msg, water_temperature->time_usec, water_temperature->water_temperature, water_temperature->latitude, water_temperature->longitude, water_temperature->altitude_amsl);
}

/**
 * @brief Send a water_temperature message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param water_temperature depth under the transducer * 100 (in feet?)
 * @param latitude Latitude, expressed as degrees * 1E7
 * @param longitude Longitude, expressed as degrees * 1E7
 * @param altitude_amsl Altitude above mean sea level (meters)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_water_temperature_send(mavlink_channel_t chan, uint64_t time_usec, float water_temperature, int32_t latitude, int32_t longitude, int32_t altitude_amsl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, water_temperature);
    _mav_put_int32_t(buf, 12, latitude);
    _mav_put_int32_t(buf, 16, longitude);
    _mav_put_int32_t(buf, 20, altitude_amsl);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_TEMPERATURE, buf, MAVLINK_MSG_ID_WATER_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_CRC);
#else
    mavlink_water_temperature_t packet;
    packet.time_usec = time_usec;
    packet.water_temperature = water_temperature;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude_amsl = altitude_amsl;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_TEMPERATURE, (const char *)&packet, MAVLINK_MSG_ID_WATER_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_CRC);
#endif
}

/**
 * @brief Send a water_temperature message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_water_temperature_send_struct(mavlink_channel_t chan, const mavlink_water_temperature_t* water_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_water_temperature_send(chan, water_temperature->time_usec, water_temperature->water_temperature, water_temperature->latitude, water_temperature->longitude, water_temperature->altitude_amsl);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_TEMPERATURE, (const char *)water_temperature, MAVLINK_MSG_ID_WATER_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_CRC);
#endif
}

#if MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_water_temperature_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float water_temperature, int32_t latitude, int32_t longitude, int32_t altitude_amsl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, water_temperature);
    _mav_put_int32_t(buf, 12, latitude);
    _mav_put_int32_t(buf, 16, longitude);
    _mav_put_int32_t(buf, 20, altitude_amsl);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_TEMPERATURE, buf, MAVLINK_MSG_ID_WATER_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_CRC);
#else
    mavlink_water_temperature_t *packet = (mavlink_water_temperature_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->water_temperature = water_temperature;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->altitude_amsl = altitude_amsl;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_TEMPERATURE, (const char *)packet, MAVLINK_MSG_ID_WATER_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN, MAVLINK_MSG_ID_WATER_TEMPERATURE_CRC);
#endif
}
#endif

#endif

// MESSAGE WATER_TEMPERATURE UNPACKING


/**
 * @brief Get field time_usec from water_temperature message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_water_temperature_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field water_temperature from water_temperature message
 *
 * @return depth under the transducer * 100 (in feet?)
 */
static inline float mavlink_msg_water_temperature_get_water_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field latitude from water_temperature message
 *
 * @return Latitude, expressed as degrees * 1E7
 */
static inline int32_t mavlink_msg_water_temperature_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field longitude from water_temperature message
 *
 * @return Longitude, expressed as degrees * 1E7
 */
static inline int32_t mavlink_msg_water_temperature_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field altitude_amsl from water_temperature message
 *
 * @return Altitude above mean sea level (meters)
 */
static inline int32_t mavlink_msg_water_temperature_get_altitude_amsl(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Decode a water_temperature message into a struct
 *
 * @param msg The message to decode
 * @param water_temperature C-struct to decode the message contents into
 */
static inline void mavlink_msg_water_temperature_decode(const mavlink_message_t* msg, mavlink_water_temperature_t* water_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    water_temperature->time_usec = mavlink_msg_water_temperature_get_time_usec(msg);
    water_temperature->water_temperature = mavlink_msg_water_temperature_get_water_temperature(msg);
    water_temperature->latitude = mavlink_msg_water_temperature_get_latitude(msg);
    water_temperature->longitude = mavlink_msg_water_temperature_get_longitude(msg);
    water_temperature->altitude_amsl = mavlink_msg_water_temperature_get_altitude_amsl(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN? msg->len : MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN;
        memset(water_temperature, 0, MAVLINK_MSG_ID_WATER_TEMPERATURE_LEN);
    memcpy(water_temperature, _MAV_PAYLOAD(msg), len);
#endif
}
