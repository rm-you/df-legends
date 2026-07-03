// FUN_1402d72b0 @ 1402d72b0
// callees:
//   -> 14000c110 FUN_14000c110


bool FUN_1402d72b0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_14000c110(param_1,"AMBER");
  if (iVar1 != 0) {
    iVar1 = FUN_14000c110(param_1,"CORAL");
    if (iVar1 != 0) {
      iVar1 = FUN_14000c110(param_1,"GLASS_GREEN");
      if (iVar1 != 0) {
        iVar1 = FUN_14000c110(param_1,"GLASS_CLEAR");
        if (iVar1 != 0) {
          iVar1 = FUN_14000c110(param_1,"GLASS_CRYSTAL");
          if (iVar1 != 0) {
            iVar1 = FUN_14000c110(param_1,"WATER");
            if (iVar1 != 0) {
              iVar1 = FUN_14000c110(param_1,"POTASH");
              if (iVar1 != 0) {
                iVar1 = FUN_14000c110(param_1,&DAT_140eb555c);
                if (iVar1 != 0) {
                  iVar1 = FUN_14000c110(param_1,"PEARLASH");
                  if (iVar1 != 0) {
                    iVar1 = FUN_14000c110(param_1,&DAT_140eb5524);
                    if (iVar1 != 0) {
                      iVar1 = FUN_14000c110(param_1,&DAT_140eb553c);
                      if (iVar1 != 0) {
                        iVar1 = FUN_14000c110(param_1,"VOMIT");
                        if (iVar1 != 0) {
                          iVar1 = FUN_14000c110(param_1,&DAT_140eb3d7c);
                          if (iVar1 != 0) {
                            iVar1 = FUN_14000c110(param_1,"FILTH_B");
                            if (iVar1 != 0) {
                              iVar1 = FUN_14000c110(param_1,"FILTH_Y");
                              if (iVar1 != 0) {
                                iVar1 = FUN_14000c110(param_1,"UNKNOWN_SUBSTANCE");
                                if (iVar1 != 0) {
                                  iVar1 = FUN_14000c110(param_1,"GRIME");
                                  if (iVar1 != 0) {
                                    iVar1 = FUN_14000c110(param_1,"ANY_HARD_STONE");
                                    return iVar1 == 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}

