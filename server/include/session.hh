#include<boost/bind.hpp>
#include<boost/asio.hpp>
#include<common/packet.hh>

using boost::asio::ip::tcp;
class session
{
								public:
																session(boost::asio::io_service & server);
																tcp::socket& socket();
																void start();
								private:
																packet p;
																tcp::socket session_socket;
																void handle_read(const boost::system::error_code& error, size_t bytes_transferred);
																void handle_write(const boost::system::error_code& error);

};
