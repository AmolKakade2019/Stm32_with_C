echo
@echo %1
@echo %2
set BUILD_CMD=%1
set T_CC=%2
@echo 
echo ------ Batch Arguments ----
Make -C ./Make/ -f Makefile.gmk %BUILD_CMD% TYPE_CC=%T_CC% 
echo "Batch Finished"