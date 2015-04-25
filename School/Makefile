SHELL = /bin/sh
EXEC = object
RM   = rm -rf

BUILD_PROTOL_DIR = protol
BUILD_BASE_DIR = base
BUILD_COM_DIR = common

BUILD_SUPER_SERVER_DIR = SuperServer
BUILD_RECORD_SERVER_DIR = RecordServer
BUILD_SESSION_SERVER_DIR = SessionServer
BUILD_SCENES_SERVER_DIR = ScenesServer

all:
	@(cd ${BUILD_PROTOL_DIR}; make cleanlib)
	@(cd ${BUILD_BASE_DIR}; make cleanlib)
	@(cd ${BUILD_COM_DIR}; make cleanlib)
	@(cd ${BUILD_SUPER_SERVER_DIR}; make cleanlib)
	@(cd ${BUILD_RECORD_SERVER_DIR}; make cleanlib)
	@(cd ${BUILD_SESSION_SERVER_DIR}; make cleanlib)
	@(cd ${BUILD_SCENES_SERVER_DIR}; make cleanlib)

	@(cd ${BUILD_PROTOL_DIR}; make)
	@(cd ${BUILD_BASE_DIR}; make)
	@(cd ${BUILD_COM_DIR}; make)
	@(cd ${BUILD_SUPER_SERVER_DIR}; make)
	@(cd ${BUILD_RECORD_SERVER_DIR}; make)
	@(cd ${BUILD_SESSION_SERVER_DIR}; make)
	@(cd ${BUILD_SCENES_SERVER_DIR}; make)
clean:
	@echo 'start clean...'
	@($(RM) $(EXEC))
	@(cd ${BUILD_PROTOL_DIR}; make clean)
	@(cd ${BUILD_BASE_DIR}; make clean)
	@(cd ${BUILD_COM_DIR}; make clean)
	@(cd ${BUILD_SUPER_SERVER_DIR}; make clean)
	@(cd ${BUILD_RECORD_SERVER_DIR}; make clean)
	@(cd ${BUILD_SESSION_SERVER_DIR}; make clean)
	@(cd ${BUILD_SCENES_SERVER_DIR}; make clean)
	@echo 'Finished!'
	@echo ''