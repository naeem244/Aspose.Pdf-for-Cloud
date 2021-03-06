#!/usr/bin/env python

class Field(object):
    """NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually."""


    def __init__(self):
        """
        Attributes:
          swaggerTypes (dict): The key is attribute name and the value is attribute type.
          attributeMap (dict): The key is attribute name and the value is json key in definition.
        """
        self.swaggerTypes = {
            'Name': 'str',
            'Type': 'FieldType',
            'Values': 'list[str]',
            'SelectedItems': 'list[int]',
            'Rect': 'Rectangle',
            'Links': 'list[Link]'

        }

        self.attributeMap = {
            'Name': 'Name','Type': 'Type','Values': 'Values','SelectedItems': 'SelectedItems','Rect': 'Rect','Links': 'Links'}       

        self.Name = None # str
        self.Type = None # FieldType
        self.Values = None # list[str]
        self.SelectedItems = None # list[int]
        self.Rect = None # Rectangle
        self.Links = None # list[Link]
        
