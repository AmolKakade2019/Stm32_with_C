echo OFF
echo
echo BATCH: -------------------- Batch START           --------------- 
@echo Argument number and corresponding meaning 
@echo 1: %1 (make command e.g. clean, all, or any other specific target name) :: used as 'BUILD_CMD'
@echo 2: %2 (Project configuration being used in visual studio (specific to HW platform)) :: used as 'PrjConfig'
@echo 3: %3 (Project HW platform) :: used as 'HW_PLATFORM'
@echo 4 and onwards: %4 (to be updated as per needs and future improvements)

set BUILD_CMD=%1
set PrjConfig=%2
set HW_PLATFORM=%3

echo BATCH: -------------------- Batch Arguments START --------------- 
echo BATCH: %BUILD_CMD%,%PrjConfig%,%HW_PLATFORM%
echo BATCH: -------------------- Batch Arguments END   --------------- 
Make -C ./Make/ -f Makefile.gmk %BUILD_CMD% VSConfig=%PrjConfig% HwPlatform=%HW_PLATFORM%
echo "Batch Finished"
echo "creating dumps"
echo BATCH: -------------------- Batch END            --------------- 