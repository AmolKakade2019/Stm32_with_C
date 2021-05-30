echo
@echo %1
@echo %2
set BUILD_CMD=%1
set PrjConfig=%2
@echo 
echo ------ Batch Arguments ----%BUILD_CMD%,%PrjConfig%,
Make -C ./Make/ -f Makefile.gmk %BUILD_CMD% VSConfig=%PrjConfig%
echo "Batch Finished"
echo "creating dumps"