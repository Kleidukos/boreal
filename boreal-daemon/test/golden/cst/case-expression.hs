BorealNode
    ( Original
        { start = TSPoint
            { pointRow = 0
            , pointColumn = 0
            }
        , end = TSPoint
            { pointRow = 6
            , pointColumn = 0
            }
        }
    ) "source"
    [ BorealNode
        ( Original
            { start = TSPoint
                { pointRow = 0
                , pointColumn = 0
                }
            , end = TSPoint
                { pointRow = 0
                , pointColumn = 24
                }
            }
        ) "module_declaration"
        [ BorealAtom
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 0
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 6
                    }
                }
            ) "module"
        , BorealIdent
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 7
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 18
                    }
                }
            ) "Expressions"
        , BorealAtom
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 19
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 24
                    }
                }
            ) "where"
        ]
    , BorealNode
        ( Original
            { start = TSPoint
                { pointRow = 2
                , pointColumn = 0
                }
            , end = TSPoint
                { pointRow = 5
                , pointColumn = 19
                }
            }
        ) "top_level_declarations"
        [ BorealNode
            ( Original
                { start = TSPoint
                    { pointRow = 2
                    , pointColumn = 0
                    }
                , end = TSPoint
                    { pointRow = 5
                    , pointColumn = 19
                    }
                }
            ) "function_declaration"
            [ BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 0
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 6
                        }
                    }
                ) "function_head"
                [ BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 0
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 4
                            }
                        }
                    ) "expr"
                , BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 5
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 6
                            }
                        }
                    ) "x"
                ]
            , BorealAtom
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 7
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 8
                        }
                    }
                ) "="
            , BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 3
                        , pointColumn = 2
                        }
                    , end = TSPoint
                        { pointRow = 5
                        , pointColumn = 19
                        }
                    }
                ) "function_body"
                [ BorealNode
                    ( Original
                        { start = TSPoint
                            { pointRow = 3
                            , pointColumn = 2
                            }
                        , end = TSPoint
                            { pointRow = 5
                            , pointColumn = 19
                            }
                        }
                    ) "case_expression"
                    [ BorealIdent
                        ( Original
                            { start = TSPoint
                                { pointRow = 3
                                , pointColumn = 2
                                }
                            , end = TSPoint
                                { pointRow = 3
                                , pointColumn = 6
                                }
                            }
                        ) "case"
                    , BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 3
                                , pointColumn = 7
                                }
                            , end = TSPoint
                                { pointRow = 3
                                , pointColumn = 8
                                }
                            }
                        ) "simple_expression"
                        [ BorealIdent
                            ( Original
                                { start = TSPoint
                                    { pointRow = 3
                                    , pointColumn = 7
                                    }
                                , end = TSPoint
                                    { pointRow = 3
                                    , pointColumn = 8
                                    }
                                }
                            ) "x"
                        ]
                    , BorealIdent
                        ( Original
                            { start = TSPoint
                                { pointRow = 3
                                , pointColumn = 9
                                }
                            , end = TSPoint
                                { pointRow = 3
                                , pointColumn = 11
                                }
                            }
                        ) "of"
                    , BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 4
                                , pointColumn = 4
                                }
                            , end = TSPoint
                                { pointRow = 5
                                , pointColumn = 19
                                }
                            }
                        ) "alternatives"
                        [ BorealAtom
                            ( Original
                                { start = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 4
                                    }
                                , end = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 5
                                    }
                                }
                            ) "|"
                        , BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 6
                                    }
                                , end = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 19
                                    }
                                }
                            ) "alternative"
                            [ BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 6
                                        }
                                    , end = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 10
                                        }
                                    }
                                ) "pattern"
                                [ BorealIdent
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 4
                                            , pointColumn = 6
                                            }
                                        , end = TSPoint
                                            { pointRow = 4
                                            , pointColumn = 10
                                            }
                                        }
                                    ) "True"
                                ]
                            , BorealIdent
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 11
                                        }
                                    , end = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 13
                                        }
                                    }
                                ) "->"
                            , BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 14
                                        }
                                    , end = TSPoint
                                        { pointRow = 4
                                        , pointColumn = 19
                                        }
                                    }
                                ) "simple_expression"
                                [ BorealIdent
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 4
                                            , pointColumn = 14
                                            }
                                        , end = TSPoint
                                            { pointRow = 4
                                            , pointColumn = 19
                                            }
                                        }
                                    ) "False"
                                ]
                            ]
                        , BorealAtom
                            ( Original
                                { start = TSPoint
                                    { pointRow = 5
                                    , pointColumn = 4
                                    }
                                , end = TSPoint
                                    { pointRow = 5
                                    , pointColumn = 5
                                    }
                                }
                            ) "|"
                        , BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 5
                                    , pointColumn = 6
                                    }
                                , end = TSPoint
                                    { pointRow = 5
                                    , pointColumn = 19
                                    }
                                }
                            ) "alternative"
                            [ BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 5
                                        , pointColumn = 6
                                        }
                                    , end = TSPoint
                                        { pointRow = 5
                                        , pointColumn = 11
                                        }
                                    }
                                ) "pattern"
                                [ BorealIdent
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 5
                                            , pointColumn = 6
                                            }
                                        , end = TSPoint
                                            { pointRow = 5
                                            , pointColumn = 11
                                            }
                                        }
                                    ) "False"
                                ]
                            , BorealIdent
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 5
                                        , pointColumn = 12
                                        }
                                    , end = TSPoint
                                        { pointRow = 5
                                        , pointColumn = 14
                                        }
                                    }
                                ) "->"
                            , BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 5
                                        , pointColumn = 15
                                        }
                                    , end = TSPoint
                                        { pointRow = 5
                                        , pointColumn = 19
                                        }
                                    }
                                ) "simple_expression"
                                [ BorealIdent
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 5
                                            , pointColumn = 15
                                            }
                                        , end = TSPoint
                                            { pointRow = 5
                                            , pointColumn = 19
                                            }
                                        }
                                    ) "True"
                                ]
                            ]
                        ]
                    ]
                ]
            ]
        ]
    ]