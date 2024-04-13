;; Auto-generated. Do not edit!


(when (boundp 'serverclient::addints)
  (if (not (find-package "SERVERCLIENT"))
    (make-package "SERVERCLIENT"))
  (shadow 'addints (find-package "SERVERCLIENT")))
(unless (find-package "SERVERCLIENT::ADDINTS")
  (make-package "SERVERCLIENT::ADDINTS"))
(unless (find-package "SERVERCLIENT::ADDINTSREQUEST")
  (make-package "SERVERCLIENT::ADDINTSREQUEST"))
(unless (find-package "SERVERCLIENT::ADDINTSRESPONSE")
  (make-package "SERVERCLIENT::ADDINTSRESPONSE"))

(in-package "ROS")





(defclass serverclient::addintsRequest
  :super ros::object
  :slots (_num1 _num2 ))

(defmethod serverclient::addintsRequest
  (:init
   (&key
    ((:num1 __num1) 0)
    ((:num2 __num2) 0)
    )
   (send-super :init)
   (setq _num1 (round __num1))
   (setq _num2 (round __num2))
   self)
  (:num1
   (&optional __num1)
   (if __num1 (setq _num1 __num1)) _num1)
  (:num2
   (&optional __num2)
   (if __num2 (setq _num2 __num2)) _num2)
  (:serialization-length
   ()
   (+
    ;; int32 _num1
    4
    ;; int32 _num2
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _num1
       (write-long _num1 s)
     ;; int32 _num2
       (write-long _num2 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _num1
     (setq _num1 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _num2
     (setq _num2 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass serverclient::addintsResponse
  :super ros::object
  :slots (_sum ))

(defmethod serverclient::addintsResponse
  (:init
   (&key
    ((:sum __sum) 0)
    )
   (send-super :init)
   (setq _sum (round __sum))
   self)
  (:sum
   (&optional __sum)
   (if __sum (setq _sum __sum)) _sum)
  (:serialization-length
   ()
   (+
    ;; int32 _sum
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _sum
       (write-long _sum s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _sum
     (setq _sum (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass serverclient::addints
  :super ros::object
  :slots ())

(setf (get serverclient::addints :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get serverclient::addints :datatype-) "serverclient/addints")
(setf (get serverclient::addints :request) serverclient::addintsRequest)
(setf (get serverclient::addints :response) serverclient::addintsResponse)

(defmethod serverclient::addintsRequest
  (:response () (instance serverclient::addintsResponse :init)))

(setf (get serverclient::addintsRequest :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get serverclient::addintsRequest :datatype-) "serverclient/addintsRequest")
(setf (get serverclient::addintsRequest :definition-)
      "int32 num1
int32 num2

---
int32 sum
")

(setf (get serverclient::addintsResponse :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get serverclient::addintsResponse :datatype-) "serverclient/addintsResponse")
(setf (get serverclient::addintsResponse :definition-)
      "int32 num1
int32 num2

---
int32 sum
")



(provide :serverclient/addints "4781436a0c2affec8025955a6041e481")


