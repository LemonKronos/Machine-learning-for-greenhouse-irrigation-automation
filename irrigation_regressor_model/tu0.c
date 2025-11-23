
#include "header.h"

void predict_unit0(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)234.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += 0.4787069517571568;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
          result[0] += 0.48353391069545865;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)735.5000000000001137) ) ) {
            result[0] += 0.4841668249501023;
          } else {
            result[0] += 0.4912096658374186;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)74.45000000000001705) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)89.49999996500001487) ) ) {
            result[0] += 0.48572650979848164;
          } else {
            result[0] += 0.49285150948183193;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.5108858240810306;
          } else {
            result[0] += 0.4993363586832344;
          }
        }
      } else {
        result[0] += 0.48537928745958536;
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)3.365367215000000467) ) ) {
          result[0] += 0.5150636315332724;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.15000000000000213) ) ) {
            result[0] += 0.5339110321586901;
          } else {
            result[0] += 0.5248931765272364;
          }
        }
      } else {
        result[0] += 0.508351510526155;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        result[0] += 0.5387126206902145;
      } else {
        result[0] += 0.5528098426475272;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
      result[0] += -0.01127889836599835;
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.25000000000001421) ) ) {
        result[0] += -0.006392207477434989;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)452.4999995000000581) ) ) {
            result[0] += -0.006218307164428552;
          } else {
            result[0] += 0.003004972752183676;
          }
        } else {
          result[0] += 0.002005056440830231;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)691.5000076000001172) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.250000000000000888) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += 0.020227854181081053;
          } else {
            result[0] += 0.036734036902586614;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
            result[0] += 0.031048895031213764;
          } else {
            result[0] += 0.01182531528612526;
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.199999983000001436) ) ) {
          result[0] += 0.00047630950535396837;
        } else {
          result[0] += 0.01383069838468845;
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)659.500000200000045) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.55000000000001137) ) ) {
          result[0] += 0.03614302207800475;
        } else {
          result[0] += 0.021208504498004918;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
          result[0] += 0.046884977188375254;
        } else {
          result[0] += 0.06097142055630683;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
      result[0] += -0.01099692592790135;
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.35000000000000853) ) ) {
        result[0] += -0.006641657239734578;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
            result[0] += -0.008445645178321238;
          } else {
            result[0] += -0.0016024049672369773;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)221.5000000000000284) ) ) {
            result[0] += -0.0011491882768612297;
          } else {
            result[0] += 0.0053519746458623564;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)691.5000076000001172) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.250000000000000888) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += 0.019722158540040252;
          } else {
            result[0] += 0.035815686720112955;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
            result[0] += 0.03027267268300057;
          } else {
            result[0] += 0.011529682330758078;
          }
        }
      } else {
        result[0] += 0.003106969128076274;
      }
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)78.95000000000001705) ) ) {
          result[0] += 0.03553137235525178;
        } else {
          result[0] += 0.022603493860134716;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
          result[0] += 0.046084343261188924;
        } else {
          result[0] += 0.05944713681936264;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)22.60000000000000497) ) ) {
        result[0] += -0.011138878051410705;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.55000000000001137) ) ) {
          result[0] += -0.006418478005759729;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)865.5000000000001137) ) ) {
            result[0] += -0.006393988905921924;
          } else {
            result[0] += 0.0005533507066157957;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.85000000000000497) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
          result[0] += -0.007598897462964736;
        } else {
          result[0] += -0.0013299174319642286;
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += 0.0030185079755675466;
          } else {
            result[0] += 0.01517805276323209;
          }
        } else {
          result[0] += -0.00618799250948036;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)3.365367215000000467) ) ) {
          result[0] += 0.02212492111054334;
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.05000000000000426) ) ) {
            result[0] += 0.04493582105636597;
          } else {
            result[0] += 0.031794908528818805;
          }
        }
      } else {
        result[0] += 0.015332802055137498;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        result[0] += 0.0440656415337608;
      } else {
        result[0] += 0.05796095709005992;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)22.60000000000000497) ) ) {
        result[0] += -0.010860406596578805;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)28.55000000000000426) ) ) {
          result[0] += -0.007419341382775627;
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.005856513543355202;
          } else {
            result[0] += -0.0020565342340743416;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.85000000000000497) ) ) {
        result[0] += -0.003658214739186625;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.350000000000000533) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)74.95000000000001705) ) ) {
            result[0] += -0.0024687297324205494;
          } else {
            result[0] += 0.01719161258273628;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1311.000000000000227) ) ) {
            result[0] += 0.00014125423636614232;
          } else {
            result[0] += 0.016402973227202893;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.15000000000001279) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.038415283780348926;
        } else {
          result[0] += 0.028125816796754684;
        }
      } else {
        result[0] += 0.011434545688331129;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)721.9999999000000344) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)4.750000017000000518) ) ) {
          result[0] += 0.03735630905628202;
        } else {
          result[0] += 0.05146833992004394;
        }
      } else {
        result[0] += 0.05772026813030243;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)234.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.010221750876631868;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)79.45000000000001705) ) ) {
          result[0] += -0.00554437862058015;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
            result[0] += -0.005760186817940501;
          } else {
            result[0] += 0.0017983672384039634;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)73.95000000000001705) ) ) {
          result[0] += -9.766739082156813e-05;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.01862113470573034;
          } else {
            result[0] += 0.007852502092126418;
          }
        }
      } else {
        result[0] += -0.0049965189661209785;
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)37.40000000000000568) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.037454903157133804;
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.35000000000000497) ) ) {
            result[0] += 0.03477911277250811;
          } else {
            result[0] += 0.02542548932708227;
          }
        }
      } else {
        result[0] += 0.015283047235570849;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)721.9999999000000344) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)4.750000017000000518) ) ) {
          result[0] += 0.03642240262031553;
        } else {
          result[0] += 0.05018163150548935;
        }
      } else {
        result[0] += 0.05627725994586944;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
      result[0] += -0.010303288888395585;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)221.5000000000000284) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)19.85000000000000497) ) ) {
          result[0] += -0.00937928956525866;
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.005641412155480305;
          } else {
            result[0] += -0.002615462040218214;
          }
        }
      } else {
        result[0] += 0.0021972755307797342;
      }
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)676.4999992500000872) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.250000000000000888) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += 0.017956305532366965;
          } else {
            result[0] += 0.033518902634580926;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
            result[0] += 0.027739977002143864;
          } else {
            result[0] += 0.009784297041728028;
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.199999983000001436) ) ) {
          result[0] += -0.00017128761316759184;
        } else {
          result[0] += 0.012639827212462061;
        }
      }
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
          result[0] += 0.03164176847072358;
        } else {
          result[0] += 0.017666636867956685;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)721.9999999000000344) ) ) {
          result[0] += 0.04234446707367896;
        } else {
          result[0] += 0.05487032985687256;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.010079897416755558;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
          result[0] += -0.006724901814752864;
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.005409701744277104;
          } else {
            result[0] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.75000000000000355) ) ) {
        result[0] += -0.0022344733802601695;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.75000000000000711) ) ) {
          if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-86.99999973499997452) ) ) {
            result[0] += 0.002994568928011826;
          } else {
            result[0] += 0.016167279329071412;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)65.55000011000001336) ) ) {
            result[0] += 0.01375969814078417;
          } else {
            result[0] += 0.001101102397752788;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
        result[0] += 0.03576132798194885;
      } else {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)2182.499996700000338) ) ) {
          result[0] += 0.013772592218592764;
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.500000000000000222) ) ) {
            result[0] += 0.01938930096725623;
          } else {
            result[0] += 0.029810758262872696;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        result[0] += 0.03889014745200122;
      } else {
        result[0] += 0.05239387606581052;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.00948777861479565;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
          result[0] += -0.005719516775349067;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.95000000000001705) ) ) {
            result[0] += -0.004157692338575054;
          } else {
            result[0] += 0.003362358844661642;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.85000000000000497) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
          result[0] += -0.007148586255498231;
        } else {
          result[0] += -0.0010372411922758653;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.350000000000000533) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)74.95000000000001705) ) ) {
            result[0] += -0.002585736462338404;
          } else {
            result[0] += 0.015846816874639708;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1311.000000000000227) ) ) {
            result[0] += -4.712880180593123e-05;
          } else {
            result[0] += 0.015039181417785586;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.15000000000001279) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.034867294073104856;
        } else {
          result[0] += 0.02433572218018143;
        }
      } else {
        result[0] += 0.010075959622859957;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1431.000000000000227) ) ) {
        result[0] += 0.038175587267787366;
      } else {
        result[0] += 0.0505042173465093;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)234.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.009594029921718747;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.45000000000001705) ) ) {
          result[0] += -0.005547710129052218;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)735.5000000000001137) ) ) {
            result[0] += -0.005944294814830241;
          } else {
            result[0] += -0.0004423704220906401;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.1500000000000199) ) ) {
          result[0] += -0.0004787513894703368;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.6500000000000199) ) ) {
            result[0] += 0.01735148311005189;
          } else {
            result[0] += 0.007387430725003859;
          }
        }
      } else {
        result[0] += -0.005028143051183886;
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.15000000000001279) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.03399561190605163;
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.050000000000000711) ) ) {
            result[0] += 0.0296062936882178;
          } else {
            result[0] += 0.020917807542360747;
          }
        }
      } else {
        result[0] += 0.009824060782790184;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)4728.750000000000909) ) ) {
          result[0] += 0.04305986991524695;
        } else {
          result[0] += 0.033212216058198143;
        }
      } else {
        result[0] += 0.04984710867206255;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.00903265160453018;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.25000000000001421) ) ) {
          result[0] += -0.005252026828114724;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
            result[0] += -0.004313260280230845;
          } else {
            result[0] += 0.0017044747746005268;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.1500000000000199) ) ) {
          result[0] += -0.00046678254236306614;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
            result[0] += 0.021117311287671327;
          } else {
            result[0] += 0.009616060499710413;
          }
        }
      } else {
        result[0] += -0.0049024394837518534;
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.15000000000001279) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.450000000000001066) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.05000000000000426) ) ) {
            result[0] += 0.03725630646402186;
          } else {
            result[0] += 0.026076770449006883;
          }
        } else {
          result[0] += 0.01747467103329572;
        }
      } else {
        result[0] += 0.009578459247946739;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)721.9999999000000344) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)4.750000017000000518) ) ) {
          result[0] += 0.0316145100918683;
        } else {
          result[0] += 0.04296956315636635;
        }
      } else {
        result[0] += 0.049710761964321136;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.00880683561471817;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.45000000000001705) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)69.85000000000000853) ) ) {
            result[0] += -0.007964622849488961;
          } else {
            result[0] += -0.004964406722037193;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4469650184633080503) ) ) {
            result[0] += 0.0002211144445838685;
          } else {
            result[0] += -0.004400480995394008;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.1500000000000199) ) ) {
          result[0] += -0.0010432916040094022;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.015740945648178985;
          } else {
            result[0] += 0.006861687262416265;
          }
        }
      } else {
        result[0] += -0.004435649914667011;
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.15000000000001279) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.50000000000000355) ) ) {
          result[0] += 0.032569584863053426;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)766.5000000000001137) ) ) {
            result[0] += 0.025823193714022637;
          } else {
            result[0] += 0.0174177115658919;
          }
        }
      } else {
        result[0] += 0.009338997587561607;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
        result[0] += 0.03588861538097262;
      } else {
        result[0] += 0.04720525490386146;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.008586664330404328;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.25000000000001421) ) ) {
          result[0] += -0.0050011975383161995;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
            result[0] += -0.004825763415707195;
          } else {
            result[0] += 0.0010182889265949295;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.250000000000000888) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)22.85000000000000497) ) ) {
            result[0] += 0.028831530443082246;
          } else {
            result[0] += 0.011171114560216668;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)744.0000000000001137) ) ) {
            result[0] += -0.0019953643860152136;
          } else {
            result[0] += 0.01069757042117999;
          }
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)2209.000000000000455) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.650000000000001243) ) ) {
            result[0] += -0.0026095808986253267;
          } else {
            result[0] += 0.005146457615857279;
          }
        } else {
          result[0] += 0.013924153022468092;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)79.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.03152158890899859;
        } else {
          result[0] += 0.02270417819775286;
        }
      } else {
        result[0] += 0.011103329726240854;
      }
    } else {
      result[0] += 0.040223804980516434;
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.008678470859665048;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)29.95000000000000284) ) ) {
            result[0] += -0.00780214607635779;
          } else {
            result[0] += -0.003365010963583535;
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.004610231814513672;
          } else {
            result[0] += 0.00015943767138473368;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.6500000000000199) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)88.49999956500001019) ) ) {
            result[0] += -0.004618314290145303;
          } else {
            result[0] += 0.0031318506925447805;
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.6500000000000199) ) ) {
            result[0] += 0.0163201180720822;
          } else {
            result[0] += 0.006597676389369993;
          }
        }
      } else {
        result[0] += -0.004306037274148801;
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.15000000000001279) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.450000000000001066) ) ) {
          result[0] += 0.026073004873686058;
        } else {
          result[0] += 0.015188442006707194;
        }
      } else {
        result[0] += 0.008769935056567193;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        result[0] += 0.0334170064661238;
      } else {
        result[0] += 0.04531840612490972;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1872.000003700000207) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.008461509201848924;
      } else {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)751.000000100000193) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)28.55000000000000426) ) ) {
            result[0] += -0.0062809568731959356;
          } else {
            result[0] += -0.0032015087030642236;
          }
        } else {
          result[0] += 0.003138387478314913;
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)74.75000000000001421) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)89.49999996500001487) ) ) {
            result[0] += -0.0042516756368180105;
          } else {
            result[0] += 0.000292659879059476;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
            result[0] += 0.019195688720381656;
          } else {
            result[0] += 0.009054428308686994;
          }
        }
      } else {
        result[0] += -0.004546576435160306;
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.05000000000000426) ) ) {
          result[0] += 0.032591767072677615;
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)78.1500000000000199) ) ) {
            result[0] += 0.02778968171704383;
          } else {
            result[0] += 0.02023829820610228;
          }
        }
      } else {
        result[0] += 0.012990770373832098;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
        result[0] += 0.03306887581944465;
      } else {
        result[0] += 0.04404845061046737;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)234.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.00797825777665617;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.004680785025429816;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.95000000000001705) ) ) {
            result[0] += -0.0030796787067709015;
          } else {
            result[0] += 0.003512740282046541;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.0030513365194201475;
        } else {
          result[0] += 0.00684794157743454;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0006317000565606924;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.1500000000000199) ) ) {
            result[0] += 0.012124650449072943;
          } else {
            result[0] += 0.025469128422608428;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0016464184084907176;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)79.6500000000000199) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)28.75000000000000355) ) ) {
            result[0] += 0.028822758354638753;
          } else {
            result[0] += 0.022196357545742233;
          }
        } else {
          result[0] += 0.00958844433610256;
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)6.150000017000000874) ) ) {
          result[0] += 0.03302364385790294;
        } else {
          result[0] += 0.04355918385088444;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.008054503794297462;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)19.65000000000000213) ) ) {
          result[0] += -0.008747619023058742;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.0069931238597712;
          } else {
            result[0] += -0.003158813876727907;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.01386547856951413;
          } else {
            result[0] += 0.0059269327653261525;
          }
        } else {
          result[0] += -0.0016911951536613128;
        }
      } else {
        result[0] += -0.0040207008685430754;
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.15000000000001279) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.028765954017639157;
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.050000000000000711) ) ) {
            result[0] += 0.025082651947935426;
          } else {
            result[0] += 0.01707433527478805;
          }
        }
      } else {
        result[0] += 0.008055664658546449;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)7.150000000000001243) ) ) {
          result[0] += 0.036616566389799106;
        } else {
          result[0] += 0.027533300431335672;
        }
      } else {
        result[0] += 0.04226326872905095;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)234.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.007590265046665762;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0044759639821212;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
            result[0] += -0.003912990020891262;
          } else {
            result[0] += 0.0016742115914147643;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.0030060116651778423;
        } else {
          result[0] += 0.0063606390471641835;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.00072140504916509;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.1500000000000199) ) ) {
            result[0] += 0.011590006166882813;
          } else {
            result[0] += 0.024485762674700134;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0015498231343277122;
    } else {
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3839.000000200000613) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.95000000000001705) ) ) {
          result[0] += 0.022874255976977124;
        } else {
          result[0] += 0.010219766655936838;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)721.9999999000000344) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)4.750000017000000518) ) ) {
            result[0] += 0.02560058471831408;
          } else {
            result[0] += 0.036688902030388514;
          }
        } else {
          result[0] += 0.042257191300392155;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.0074005084446168885;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.004364064903917787;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
            result[0] += -0.003836345749575345;
          } else {
            result[0] += 0.0016984500828828035;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.850000000000000533) ) ) {
          result[0] += -0.0028522538111678195;
        } else {
          result[0] += 0.006199756761869559;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0007033698943754037;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.02086641012877226;
          } else {
            result[0] += 0.010089320522733033;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.05000000000001137) ) ) {
        result[0] += 0.0001461618021130562;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)79.95000000000001705) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.15000000000000213) ) ) {
            result[0] += 0.02666924756434229;
          } else {
            result[0] += 0.018403844346274744;
          }
        } else {
          result[0] += 0.0075186664387583745;
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)721.9999999000000344) ) ) {
        result[0] += 0.02987263250967552;
      } else {
        result[0] += 0.04120076096057892;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1872.000003700000207) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.007486707406883786;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)28.55000000000000426) ) ) {
          result[0] += -0.0054941479774588;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)34.05000000000000426) ) ) {
            result[0] += -0.003292136122497442;
          } else {
            result[0] += 0.00022699003837381803;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.85000000000000497) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
          result[0] += -0.006084972609003837;
        } else {
          result[0] += -0.00046511305754797335;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.75000000000000711) ) ) {
          if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-86.99999973499997452) ) ) {
            result[0] += 0.001672651397064328;
          } else {
            result[0] += 0.011934394504840268;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)355.9999998500000515) ) ) {
            result[0] += -0.00016767649374042567;
          } else {
            result[0] += 0.011756278038024905;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.05000000000000426) ) ) {
        result[0] += 0.029297846019268037;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)31.85000000000000497) ) ) {
          result[0] += 0.023587352808402934;
        } else {
          result[0] += 0.015641269554694495;
        }
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)6.150000017000000874) ) ) {
        result[0] += 0.029701295197010032;
      } else {
        result[0] += 0.03984494164586067;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.0072995398746435215;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.45000000000001705) ) ) {
          result[0] += -0.0043050014342981315;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4469650184633080503) ) ) {
            result[0] += -6.534469396635694e-05;
          } else {
            result[0] += -0.00396555585398218;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.6330708189934523) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0010599176627583804;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
            result[0] += 0.01933447918817401;
          } else {
            result[0] += 0.0082553993162889;
          }
        }
      } else {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.0037622851121329494;
        } else {
          result[0] += 0.0059095483282580975;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0013642875757068395;
    } else {
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.95000000000001705) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)35.65000000000001279) ) ) {
            result[0] += 0.019344224315853073;
          } else {
            result[0] += 0.027997092414986005;
          }
        } else {
          result[0] += 0.009398289574310185;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
          result[0] += 0.028027550511889987;
        } else {
          result[0] += 0.03834244427581628;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)224.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.006881837909502694;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.45000000000001705) ) ) {
          result[0] += -0.004289858414144986;
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.003470273988820483;
          } else {
            result[0] += 0.0013212235513815863;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.850000000000000533) ) ) {
          result[0] += -0.0028019767407423415;
        } else {
          result[0] += 0.005768557178716247;
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.15000000000000213) ) ) {
            result[0] += 0.013477069860220785;
          } else {
            result[0] += 0.004483738627843559;
          }
        } else {
          result[0] += -0.004295632484136149;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0013301803645394419;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)34.65000000000001279) ) ) {
            result[0] += 0.018896236936656798;
          } else {
            result[0] += 0.026292597271502016;
          }
        } else {
          result[0] += 0.01044926519064527;
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.027201537359505885;
        } else {
          result[0] += 0.037752713305609566;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.006948098846559609;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
            result[0] += -0.00603487255333951;
          } else {
            result[0] += -0.0005433151203183586;
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.003721618290345682;
          } else {
            result[0] += 0.0006659179770548899;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.002733289498037526;
        } else {
          result[0] += 0.005637606723377338;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0008112764314171814;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
            result[0] += 0.018532177364081144;
          } else {
            result[0] += 0.008253051615054054;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0012969259026905766;
    } else {
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3839.000000200000613) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)79.6500000000000199) ) ) {
          result[0] += 0.02000001981434688;
        } else {
          result[0] += 0.008388717408691135;
        }
      } else {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.4500000000000011213) ) ) {
          result[0] += 0.027182255905607473;
        } else {
          result[0] += 0.03885791799426079;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
      result[0] += -0.006544489308140007;
    } else {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.95000000000001705) ) ) {
        result[0] += -0.0038709637732839853;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
            result[0] += -0.005906197916954122;
          } else {
            result[0] += 0;
          }
        } else {
          result[0] += 0.0006897175569360241;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)676.4999992500000872) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.250000000000000888) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)22.85000000000000497) ) ) {
            result[0] += 0.025822908976538606;
          } else {
            result[0] += 0.012047688844190404;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
            result[0] += 0.01958968757092953;
          } else {
            result[0] += 0.005982362511507296;
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.199999983000001436) ) ) {
          result[0] += -0.0011047335175395597;
        } else {
          result[0] += 0.009470826712651896;
        }
      }
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
          result[0] += 0.021152382657883016;
        } else {
          result[0] += 0.011074167273261333;
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.02576194837689399;
        } else {
          result[0] += 0.036058651485613415;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)224.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.006614334900220929;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)19.65000000000000213) ) ) {
          result[0] += -0.007609232219734363;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.006163616437760711;
          } else {
            result[0] += -0.0025222269542459603;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.002754041613199008;
        } else {
          result[0] += 0.005358375787305144;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0014681914528831838;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)36.05000000000000426) ) ) {
            result[0] += 0.013497892874064762;
          } else {
            result[0] += 0.0035175705470732958;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0012290770872293607;
    } else {
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.95000000000001705) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.016096309597947094;
          } else {
            result[0] += 0.02311248324215412;
          }
        } else {
          result[0] += 0.0084145614085719;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)721.9999999000000344) ) ) {
          result[0] += 0.025653701604440294;
        } else {
          result[0] += 0.0358805445432663;
        }
      }
    }
  }
}

