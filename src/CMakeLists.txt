#set(ann_src
								#loss_function.cu  
		#optimizer.cu
		#activation.cu  
		#ann.cu	
		#)

#cuda_add_library(ann ${LIB_TYPE} ${ann_src})

#target_link_libraries(ann
								# ${CUDA_CUBLAS_LIBRARIES}
		#  ${CMAKE_THREAD_LIBS_INIT}
		#  ${MATH_LIBS}
		#)

#install(TARGETS ann LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
#install(DIRECTORY ../include/ann DESTINATION include)

#new
set(common_src packet.cc)
add_library(common ${LIB_TYPE} ${common_src})
target_link_libraries(common ${Boost_LINK_LIBRARIES} ${BOOST_LIBS_IN_USE})
install(TARGETS common LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
install(DIRECTORY ../include/common DESTINATION include)

