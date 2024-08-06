BorealNode
    ( Original
        { start = TSPoint
            { pointRow = 0
            , pointColumn = 0
            }
        , end = TSPoint
            { pointRow = 3
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
                , pointColumn = 19
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
                    , pointColumn = 13
                    }
                }
            ) "Record"
        , BorealAtom
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 14
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 19
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
                { pointRow = 2
                , pointColumn = 33
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
                    { pointRow = 2
                    , pointColumn = 33
                    }
                }
            ) "datatype_declaration"
            [ BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 0
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 10
                        }
                    }
                ) "datatype_head"
                [ BorealAtom
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
                    ) "type"
                , BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 5
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 10
                            }
                        }
                    ) "Point"
                ]
            , BorealAtom
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 11
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 12
                        }
                    }
                ) "="
            , BorealAtom
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 13
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 14
                        }
                    }
                ) "{"
            , BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 15
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 31
                        }
                    }
                ) "record_body"
                [ BorealNode
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 15
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 22
                            }
                        }
                    ) "record_member"
                    [ BorealIdent
                        ( Original
                            { start = TSPoint
                                { pointRow = 2
                                , pointColumn = 15
                                }
                            , end = TSPoint
                                { pointRow = 2
                                , pointColumn = 16
                                }
                            }
                        ) "x"
                    , BorealIdent
                        ( Original
                            { start = TSPoint
                                { pointRow = 2
                                , pointColumn = 17
                                }
                            , end = TSPoint
                                { pointRow = 2
                                , pointColumn = 18
                                }
                            }
                        ) ":"
                    , BorealIdent
                        ( Original
                            { start = TSPoint
                                { pointRow = 2
                                , pointColumn = 19
                                }
                            , end = TSPoint
                                { pointRow = 2
                                , pointColumn = 22
                                }
                            }
                        ) "Int"
                    ]
                , BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 22
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 23
                            }
                        }
                    ) ","
                , BorealNode
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 24
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 31
                            }
                        }
                    ) "record_member"
                    [ BorealIdent
                        ( Original
                            { start = TSPoint
                                { pointRow = 2
                                , pointColumn = 24
                                }
                            , end = TSPoint
                                { pointRow = 2
                                , pointColumn = 25
                                }
                            }
                        ) "y"
                    , BorealIdent
                        ( Original
                            { start = TSPoint
                                { pointRow = 2
                                , pointColumn = 26
                                }
                            , end = TSPoint
                                { pointRow = 2
                                , pointColumn = 27
                                }
                            }
                        ) ":"
                    , BorealIdent
                        ( Original
                            { start = TSPoint
                                { pointRow = 2
                                , pointColumn = 28
                                }
                            , end = TSPoint
                                { pointRow = 2
                                , pointColumn = 31
                                }
                            }
                        ) "Int"
                    ]
                ]
            , BorealAtom
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 32
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 33
                        }
                    }
                ) "}"
            ]
        ]
    ]