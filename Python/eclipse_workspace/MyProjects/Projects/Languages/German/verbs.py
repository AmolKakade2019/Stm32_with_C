#coding=iso-8859-15
'''
Created on 30 Aug 2021

@author: kakade
'''

verbs_dict = {"Infinitive": {"pr�sense": {"ich": "",
                                          "du": "",
                                          "er": "",
                                          "sie": "",
                                          "es": "",
                                          "wir": "",
                                          "ihr": "",
                                          "sie_Sie": ""
                                          },
                             "pr�teritum": {},
                             "perfekt": {},
                             }}

verbs_dict["machen"] = {"pr�sense": {"ich": "mache",
                                     "du": "machst",
                                     "er": "macht",
                                     "sie": "macht",
                                     "es": "macht",
                                     "wir": "machen",
                                     "ihr": "macht",
                                     "sie_Sie": "machen"
                                     },
                        "pr�teritum": {"ich": "machte",
                                       "du": "machtest",
                                       "er": "machtet",
                                       "sie": "machtet",
                                       "es": "machtet",
                                       "wir": "machten",
                                       "ihr": "machtet",
                                       "sie_Sie": "machten"
                                       },
                        "perfekt": {"gemacht"},
                        }

if __name__ == '__main__':
    print(verbs_dict)