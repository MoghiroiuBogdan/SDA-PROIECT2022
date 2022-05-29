cmake_minimum_required(VERSION 3.21)
project(SDA_PROIECT2022)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SDA_PROIECT2022
        main.cpp user.h RepositoryUser.h serviceUser.h UserInterface.h array.h test.cpp test.h mesaj.h RepositoryMesaj.h serviceMesaj.h prietenie.h RepositoryPrietenie.h servicePrietenie.h eveniment.h repositoryEveniment.h serviceEveniment.h)
