if (${NETWORKMANAGER_VERSION} VERSION_EQUAL 1.0.0 OR ${NETWORKMANAGER_VERSION} VERSION_GREATER 1.0.0)
include_directories(
   ${NM-CORE_INCLUDE_DIRS}
)
else()
include_directories(
    ${NETWORKMANAGER_INCLUDE_DIRS}
    ${NM-GLIB_INCLUDE_DIRS}
)
endif()

include_directories (
    ${CMAKE_SOURCE_DIR}/src/settings
)

include(ECMAddTests)

find_package(Qt5 ${REQUIRED_QT_VERSION} NO_MODULE REQUIRED Test)
set_package_properties(Qt5Test PROPERTIES PURPOSE "Required for autotests")

ecm_add_test(managertest.cpp LINK_LIBRARIES Qt5::Test KF5NetworkManagerQt_static fakeNetwork)
ecm_add_test(settingstest.cpp LINK_LIBRARIES Qt5::Test KF5NetworkManagerQt_static fakeNetwork)
ecm_add_test(activeconnectiontest.cpp LINK_LIBRARIES Qt5::Test KF5NetworkManagerQt_static fakeNetwork)

add_subdirectory(settings)
