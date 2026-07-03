// FUN_140675110 @ 140675110
// callees:
//   -> 1404549f0 FUN_1404549f0
//   -> EXTERNAL:0000006e GetTickCount


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140675110(short param_1,short param_2,short param_3,char param_4)

{
  if (DAT_1410b67dc == 0) {
    DAT_141c3d260 = 0;
    _DAT_141c3d3d8 = 0xffffffffffffffff;
    if (param_4 != '\0') {
      DAT_141699288 = 1;
    }
    DAT_1410b6760 = 0xffff8ad0;
    _DAT_1410b676c = 0xffff8ad0;
    if (param_1 != -30000) {
      _DAT_1410b6730 = (int)param_1;
      _DAT_1410b6734 = (int)param_2;
      _DAT_1410b6738 = (int)param_3;
      FUN_1404549f0(1);
      _DAT_1410b6730 = 0xffff8ad0;
      _DAT_141c3e244 = 0x101;
    }
    if (0 < DAT_141c513e4) {
      _DAT_1410b687c = GetTickCount();
      _DAT_1410b6880 = DAT_141c513e4;
    }
  }
  return;
}

