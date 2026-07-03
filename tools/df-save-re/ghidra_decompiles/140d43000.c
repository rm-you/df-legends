// FUN_140d43000 @ 140d43000
// callees:
//   -> 140d43260 FUN_140d43260
//   -> 140d2cb70 FUN_140d2cb70


void FUN_140d43000(undefined8 param_1,short param_2,ulonglong param_3,ulonglong param_4,
                  undefined2 param_5,undefined2 param_6)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  ulonglong uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined1 uVar12;
  undefined1 uVar11;
  
  uVar8 = param_4 & 0xffff;
  uVar10 = 0;
  sVar7 = (short)param_3;
  uVar9 = param_5;
  FUN_140d43260(param_1,param_2,param_3,param_4,param_5,2);
  uVar11 = (undefined1)((ushort)uVar9 >> 8);
  uVar12 = (undefined1)((ushort)uVar10 >> 8);
  iVar1 = param_2 + 1;
  uVar6 = (int)param_2 - 1;
  if ((short)uVar6 <= iVar1) {
    do {
      uVar5 = (uint)(short)(sVar7 + -1);
      uVar3 = uVar5;
      while ((int)uVar3 <= sVar7 + 1) {
        if (((short)uVar6 != param_2) || ((short)uVar5 != sVar7)) {
          uVar10 = 0;
          uVar9 = param_6;
          FUN_140d43260(param_1,uVar6 & 0xffff,uVar5 & 0xffff,uVar8,param_6,2);
        }
        uVar4 = (short)uVar5 + 1;
        uVar5 = (uint)uVar4;
        uVar3 = (uint)(short)uVar4;
      }
      uVar11 = (undefined1)((ushort)uVar9 >> 8);
      uVar12 = (undefined1)((ushort)uVar10 >> 8);
      uVar4 = (short)uVar6 + 1;
      uVar6 = (uint)uVar4;
    } while ((short)uVar4 <= iVar1);
  }
  uVar9 = CONCAT11(uVar12,1);
  uVar10 = CONCAT11(uVar11,1);
  cVar2 = FUN_140d2cb70(param_1,param_2,param_3 & 0xffff,uVar8,uVar10,uVar9,0,0,0);
  uVar11 = (undefined1)((ushort)uVar10 >> 8);
  uVar12 = (undefined1)((ushort)uVar9 >> 8);
  if (cVar2 != '\0') {
    uVar12 = 0;
    uVar10 = param_5;
    FUN_140d43260(param_1,param_2,param_3 & 0xffff,(int)uVar8 + -1,param_5,2);
    uVar11 = (undefined1)((ushort)uVar10 >> 8);
  }
  sVar7 = (short)param_4 + 1;
  cVar2 = FUN_140d2cb70(param_1,param_2,param_3 & 0xffff,sVar7,CONCAT11(uVar11,1),CONCAT11(uVar12,1)
                        ,0,0,0);
  if (cVar2 != '\0') {
    FUN_140d43260(param_1,param_2,param_3 & 0xffff,sVar7,param_5,2);
  }
  return;
}

