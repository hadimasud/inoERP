<?php

class bom_overhead_resource_assignment extends bom_overhead {

 protected static $table_name = "bom_overhead_resource_assignment";
//  data base variables as stored database column name
 public static $field_array = [
		 'bom_overhead_resource_assignment_id',
		 'bom_overhead_id',
		 'cost_type_id',
		 'resource_id',
		 'created_by',
		 'creation_date',
		 'last_update_by',
		 'last_update_date'
 ];
//variables used for showing data
 public static $initial_search_array = [
 ];
 public static $column_array = [
 ];
 public static $account_array = [
 ];
 public static $checkbox_array = [
 ];
 public static $fields_inForm_notInDataBase = [
		 'cost_type_description',
		 'resource_description'
 ];
 public static $fields_inHeader_needsToBeInserted_inPOST = [
 ];
 public static $base_encoded_array = [];
 public static $requiredField_array = [
		 'bom_overhead_id',
		 'cost_type_id',
		 'resource_id'
 ];
 public static $primary_column = "bom_overhead_resource_assignment_id";
 public $bom_overhead_id;
 public $cost_type_id;
 public $bom_overhead_resource_assignment_id;
 public $resource_id;
 public $cost_type_description;
 public $resource_description;
 public $created_by;
 public $creation_date;
 public $last_update_by;
 public $last_update_date;
 public $time;
 public $msg;

 public static function find_by_bom_overheadId($bom_overheadId) {
	global $db;
	$sql = "SELECT * FROM " .
					self::$table_name .
					" where bom_overhead_id= '{$bom_overheadId}' ";
	$result = self::find_by_sql($sql);
	return $result;
 }

}

//end of bom_overhead_resource_assignment class
?>