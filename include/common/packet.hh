#ifndef PACKET_HH
#define PACKET_HH
#include<cstdint>
#include<boost/asio.hpp>
#include<memory>
class packet
{
								private:
																std::shared_ptr<char[]> message_buffer;
								public:
																packet(std::uint16_t packet_length);
																void encode();
																void decode();
};
#endif
