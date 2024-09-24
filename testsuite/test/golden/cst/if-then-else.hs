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
                , pointColumn = 23
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
                    , pointColumn = 17
                    }
                }
            ) "IfThenElse"
        , BorealAtom
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 18
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 23
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
                , pointColumn = 13
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
                    , pointColumn = 13
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
                        , pointColumn = 5
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
                            , pointColumn = 3
                            }
                        }
                    ) "fun"
                , BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 4
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 5
                            }
                        }
                    ) "x"
                ]
            , BorealAtom
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 6
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 7
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
                        , pointColumn = 13
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
                            , pointColumn = 13
                            }
                        }
                    ) "if_then_else"
                    [ BorealAtom
                        ( Original
                            { start = TSPoint
                                { pointRow = 3
                                , pointColumn = 2
                                }
                            , end = TSPoint
                                { pointRow = 3
                                , pointColumn = 4
                                }
                            }
                        ) "if"
                    , BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 3
                                , pointColumn = 5
                                }
                            , end = TSPoint
                                { pointRow = 3
                                , pointColumn = 15
                                }
                            }
                        ) "simple_expression"
                        [ BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 3
                                    , pointColumn = 5
                                    }
                                , end = TSPoint
                                    { pointRow = 3
                                    , pointColumn = 15
                                    }
                                }
                            ) "binary_operation"
                            [ BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 3
                                        , pointColumn = 5
                                        }
                                    , end = TSPoint
                                        { pointRow = 3
                                        , pointColumn = 6
                                        }
                                    }
                                ) "simple_expression"
                                [ BorealIdent
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 3
                                            , pointColumn = 5
                                            }
                                        , end = TSPoint
                                            { pointRow = 3
                                            , pointColumn = 6
                                            }
                                        }
                                    ) "x"
                                ]
                            , BorealIdent
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 3
                                        , pointColumn = 7
                                        }
                                    , end = TSPoint
                                        { pointRow = 3
                                        , pointColumn = 9
                                        }
                                    }
                                ) "=="
                            , BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 3
                                        , pointColumn = 10
                                        }
                                    , end = TSPoint
                                        { pointRow = 3
                                        , pointColumn = 15
                                        }
                                    }
                                ) "simple_expression"
                                [ BorealIdent
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 3
                                            , pointColumn = 10
                                            }
                                        , end = TSPoint
                                            { pointRow = 3
                                            , pointColumn = 15
                                            }
                                        }
                                    ) ""lol""
                                ]
                            ]
                        ]
                    , BorealAtom
                        ( Original
                            { start = TSPoint
                                { pointRow = 4
                                , pointColumn = 2
                                }
                            , end = TSPoint
                                { pointRow = 4
                                , pointColumn = 6
                                }
                            }
                        ) "then"
                    , BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 4
                                , pointColumn = 7
                                }
                            , end = TSPoint
                                { pointRow = 4
                                , pointColumn = 11
                                }
                            }
                        ) "simple_expression"
                        [ BorealIdent
                            ( Original
                                { start = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 7
                                    }
                                , end = TSPoint
                                    { pointRow = 4
                                    , pointColumn = 11
                                    }
                                }
                            ) "blap"
                        ]
                    , BorealAtom
                        ( Original
                            { start = TSPoint
                                { pointRow = 5
                                , pointColumn = 2
                                }
                            , end = TSPoint
                                { pointRow = 5
                                , pointColumn = 6
                                }
                            }
                        ) "else"
                    , BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 5
                                , pointColumn = 7
                                }
                            , end = TSPoint
                                { pointRow = 5
                                , pointColumn = 13
                                }
                            }
                        ) "simple_expression"
                        [ BorealIdent
                            ( Original
                                { start = TSPoint
                                    { pointRow = 5
                                    , pointColumn = 7
                                    }
                                , end = TSPoint
                                    { pointRow = 5
                                    , pointColumn = 13
                                    }
                                }
                            ) "mouarf"
                        ]
                    ]
                ]
            ]
        ]
    ]