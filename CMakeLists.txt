cmake_minimum_required(VERSION 3.16)

project(1229 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 定义需要的 Qt 模块
set(QT_MODULES Widgets WebEngineWidgets Sql)

# 查找 Qt6 或 Qt5 库和指定的模块
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS ${QT_MODULES})
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS ${QT_MODULES})

# 设置源文件
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    logic.cpp
    logic.h
    login.cpp
    login.h
    login.ui
    admin/admini_check.cpp
    admin/admini_check.h
    admin/admini_check.ui
    admin/admini_info.cpp
    admin/admini_info.h
    admin/admini_info.ui
    admin/admini_info_done.cpp
    admin/admini_info_done.h
    admin/admini_info_done.ui
    admin/admini_main.cpp
    admin/admini_main.h
    admin/admini_main.ui
    admin/adminiwindow.cpp
    admin/adminiwindow.h
    admin/adminiwindow.ui
    business/dishchange.cpp
    business/dishchange.h
    business/dishchange.ui
    business/evalute.cpp
    business/evalute.h
    business/evalute.ui
    business/good_act.cpp
    business/good_act.h
    business/good_act.ui
    business/good_mange.cpp
    business/good_mange.h
    business/good_mange.ui
    business/inform.cpp
    business/inform.h
    business/inform.ui
    business/inform_change.cpp
    business/inform_change.h
    business/inform_change.ui
    business/shangjia.cpp
    business/shangjia.h
    business/shangjia.ui
    business/shangjia2.cpp
    business/shangjia2.h
    business/shangjia2.ui
    business/shangjia3.cpp
    business/shangjia3.h
    business/shangjia3.ui
    business/workbench.cpp
    business/workbench.h
    business/workbench.ui
    consumer/con_reviews.cpp
    consumer/con_reviews.h
    consumer/con_reviews.ui
    consumer/consumer_information.cpp
    consumer/consumer_information.h
    consumer/consumer_information.ui
    consumer/consumer_interface.cpp
    consumer/consumer_interface.h
    consumer/consumer_interface.ui
    consumer/detailedmenu.cpp
    consumer/detailedmenu.h
    consumer/detailedmenu.ui
    consumer/orderstatus.cpp
    consumer/orderstatus.h
    consumer/orderstatus.ui
    consumer/shoppingcart.cpp
    consumer/shoppingcart.h
    consumer/shoppingcart.ui
    consumer/storepage.cpp
    consumer/storepage.h
    consumer/storepage.ui
    consumer/address.cpp
    consumer/address.h
    consumer/address.ui
    consumer/change_inform.cpp
    consumer/change_inform.h
    consumer/change_inform.ui
    consumer/histroy_record.cpp
    consumer/histroy_record.h
    consumer/histroy_record.ui
    consumer/complaints.cpp
    consumer/complaints.h
    consumer/complaints.ui
    consumer/sellerwidget.cpp
    consumer/sellerwidget.h
    map.cpp
    map.h
    map.ui
    rider/order_review.cpp
    rider/order_review.h
    rider/order_review.ui
    rider/rider_inform.cpp
    rider/rider_inform.h
    rider/rider_inform.ui
    rider/rider_main.cpp
    rider/rider_main.h
    rider/rider_main.ui
    rider/task_completed.cpp
    rider/task_completed.h
    rider/task_completed.ui
    rider/task_inform.cpp
    rider/task_inform.h
    rider/task_inform.ui
    rider/timeworker.cpp
    rider/timeworker.h
    ServerConnectionManager.h
)

# 添加可执行文件
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(1229
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        database/database.cpp database/database.h
        head.h
        StarRatingWidget.h
        Image.qrc
        all.cpp all.h customer.cpp customer.h rider.cpp rider.h Seller.cpp Seller.h
        rider/orderwidget.h rider/orderwidget.cpp
        business/dishwidget.cpp business/dishwidget.h consumer/history_orderwidget.cpp consumer/history_orderwidget.h
        admin/admini_orderwidget.cpp admin/admini_orderwidget.h
        admin/admini_orderwidget.cpp admin/admini_orderwidget.h
        consumer/dish_widget.h consumer/dish_widget.cpp


    )
else()
    if(ANDROID)
        add_library(1229 SHARED ${PROJECT_SOURCES})
    else()
        add_executable(1229 ${PROJECT_SOURCES})
    endif()
endif()

# 链接 Qt 模块
if(${QT_VERSION_MAJOR} EQUAL 6)
    foreach(module IN LISTS QT_MODULES)
        target_link_libraries(1229 PRIVATE Qt6::${module})
    endforeach()
else()
    foreach(module IN LISTS QT_MODULES)
        target_link_libraries(1229 PRIVATE Qt5::${module})
    endforeach()
endif()

# 配置 iOS 或 macOS 包标识（如果适用）
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.1229)
endif()
set_target_properties(1229 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# 安装设置
include(GNUInstallDirs)
install(TARGETS 1229
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Qt6 特别的最终化处理
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(1229)
endif()
