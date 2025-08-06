idf_component_register(
    SRCS "MQUnifiedsensor.cpp"
    INCLUDE_DIRS "include"
    REQUIRES driver freertos buffer_ring_analog_reader
)
