#ifndef SERVER_HH
#define SERVER_HH
#include "session.hh"
class server
{
								public:
																server(boost::asio::io_service& io_service, std::uint16_t port);
								private:
																void start_accept();
																void handle_accept(session* new_session, const boost::system::error_code& error);
																boost::asio::io_service & server_io_service;
																tcp::acceptor server_acceptor;
};
#endif
