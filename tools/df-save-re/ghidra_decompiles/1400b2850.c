// FUN_1400b2850 @ 1400b2850
// callees:


undefined8 FUN_1400b2850(undefined8 *param_1)

{
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),
                  (*(uint *)*param_1 & 1 << ((byte)param_1[1] & 0x1f)) != 0);
}

