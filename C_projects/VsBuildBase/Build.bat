echo
echo BATCH: -------------------- Batch START           --------------- 
@echo %1
@echo %2
set BUILD_CMD=%1
set PrjConfig=%2
@echo 
echo BATCH: -------------------- Batch Arguments START --------------- 
echo BATCH: %BUILD_CMD%,%PrjConfig%,
echo BATCH: -------------------- Batch Arguments END   --------------- 
Make -C ./Make/ -f Makefile.gmk %BUILD_CMD% VSConfig=%PrjConfig%
echo "Batch Finished"
echo "creating dumps"
echo BATCH: -------------------- Batch END            --------------- 